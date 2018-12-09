#pragma once
#include "TreatmentQueue.h"
#include <ctime>
#include <cstdlib>
#include <iostream>

#ifndef WaitingRoomQueue_H_
#define WaitingRoom_H_


class WaitingRoomQueue : public TreatmentQueue
{
private:
	std::vector <Resident *> Residents;
	std::vector <Resident *> SickResidents;
	double PatientArrival;
	double WholePatients = 0;
public:
	WaitingRoomQueue() { PatientArrival = 0; };
	WaitingRoomQueue(double ArrivalRate) { PatientArrival = ArrivalRate/60.0; }
	void update();
	void addResident(Resident *);
	int AssignPriorityNum();
	void DisplayNames();
};
#endif