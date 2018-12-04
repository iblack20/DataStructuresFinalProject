#include "stdafx.h"
#include "WaitingRoomQueue.h"

void WaitingRoomQueue::update()
{
	srand(time(NULL));

	std::vector<Resident *>::iterator it = Residents.begin();
	for (int i = 0; i < PatientArrivalRate / 60; i++)
	{

	}
}

void WaitingRoomQueue::addResident(Resident * r)
{
	Residents.insert(r);
}
