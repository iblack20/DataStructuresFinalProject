//////////////////////////////
// Defines Hospital class
//////////////////////////////

#include "Resident.h"
#include "TreatmentQueue.h"
#include "WaitingRoomQueue.h"
#include "DoctorQueue.h"
#include "NurseQueue.h"
#include <iostream>
#include <iterator>
#include <set>
#include <vector>
#include <queue>


#ifndef Hospital_H
#define Hospital_H




class Hospital
{
private:
	std::vector <TreatmentQueue *> h_queues; // have h_queue only hold nurses and doctor, just variable for WaitingroomQueue
	int DoctorsWorking;
	int NursesWorking;
	int TotalRunTime;
	WaitingRoomQueue W1;
public:
	friend class TreatmentQueue;
	Hospital() 
	{
		DoctorsWorking = 0;
		NursesWorking = 0;
		TotalRunTime = 0;
	}	
	Hospital(int Doctors, int Nurses, int days, double ArrivalRate)
	{
		TotalRunTime = days * 24 * 60;
		WaitingRoomQueue * WaitingQ = new WaitingRoomQueue(ArrivalRate);
		W1=*WaitingQ;

		for (int i = 0; i < Doctors; i++)
		{
			DoctorQueue * DocQ = new DoctorQueue;
			h_queues.push_back(DocQ);
		}
		for (int i = 0; i < Nurses; i++)
		{
			NurseQueue * NurseQ = new NurseQueue();
			h_queues.push_back(NurseQ);
		}
		
	

	}
	void Simulate();
	void Report();
	
	
};

#endif 