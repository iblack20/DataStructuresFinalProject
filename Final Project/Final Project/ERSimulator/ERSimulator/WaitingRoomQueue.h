#pragma once
#include "TreatmentQueue.h"
#include <ctime>
#include <cstdlib>

#ifndef WaitingRoomQueue_H_
#define WaitingRoom_H_


class WaitingRoomQueue : public TreatmentQueue
{
private:
	std::vector <Resident *> Residents;
	int PatientArrivalRate;
public:
	WaitingRoomQueue() { PatientArrivalRate = 0; };
	WaitingRoomQueue(int ArrivalRate) { PatientArrivalRate = ArrivalRate; }
	void update();
	void addResident(Resident *);

};
#endif