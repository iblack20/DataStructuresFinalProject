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
	int PatientArrivalRate;
public:
	WaitingRoomQueue() { PatientArrivalRate = 0; };
	WaitingRoomQueue(int ArrivalRate) { PatientArrivalRate = ArrivalRate; }
	void update();
	void addResident(Resident *);
	int AssignPriorityNum();
	void DisplayNames();
};
#endif