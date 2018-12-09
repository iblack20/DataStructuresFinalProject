
#include "TreatmentQueue.h"

#include <ctime>
#include <cstdlib>
#include <iostream>
#include <fstream>
using std::cout;
using std::endl;

#ifndef WaitingRoomQueue_H_
#define WaitingRoomQueue_H_


class WaitingRoomQueue : public TreatmentQueue
{
private:
	std::priority_queue<Resident> lowPriorityQueue;
	std::priority_queue<Resident> highPriorityQueue;
	std::vector<Resident *> Residents;
	double WholePatients;
	double PatientArrival;

public:
	friend class NurseQueue;
	friend class DoctorQueue;
	WaitingRoomQueue() { WholePatients = 0; PatientArrival = 0; }
	WaitingRoomQueue(double ArrivalRate) 
	{ 
		PatientArrival = ArrivalRate / 60.0; 
		
	
	// check if file with resident names opens correctly
			std::string netfile = "J:\\DataStructuresFinalProject3\\Final Project\\Final Project\\ERSimulator\\ERSimulator\\residents.txt";
			std::ifstream fin(netfile);
				if (fin.fail()) {
					cout << "Cannot open file." << endl;
					//return 0;
	}

	// loop fills vector "Residents" with Resident objects, getting their names from file containing list of names
			std::string word;
			while (fin >> word)
				{
					Resident * R1 = new Resident(word);
					Residents.push_back(R1);
				}
			fin.close(); 
	
	};
	void update(int t, WaitingRoomQueue& v);
	int AssignPriorityNum();
	void DisplayNames();
};
#endif