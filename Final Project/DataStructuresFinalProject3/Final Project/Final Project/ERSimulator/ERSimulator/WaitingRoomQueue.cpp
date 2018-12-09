#include "stdafx.h"
#include "WaitingRoomQueue.h"

void WaitingRoomQueue::update()
{
	WholePatients+= PatientArrival;
	if (WholePatients >= 1.00)										// will loop through number of pateints arriving per minute (Arrival rate/60)
	{
		int randnum = rand() % Residents.size();					// Selects random member of Residents
		Residents[randnum]->setPrioritynum(AssignPriorityNum());	// Sets priority number with AssignPriorityNum function
		SickResidents.push_back(Residents[randnum]);				// Pushes Resident into new vector SickResidents for sorting 
		Residents.erase(Residents.begin()+randnum);
		Resident R1 = *(SickResidents[SickResidents.size() - 1]);
		r_queue.push(R1);											// Pushes Resident from vector into priority queue
		WholePatients--;
	}
}

void WaitingRoomQueue::addResident(Resident * r)
{
	Residents.push_back(r);
}

int WaitingRoomQueue::AssignPriorityNum()
{
	int percentNum = rand() % 10;									// random numer 0-9 created for odds of severity of illness

	if (percentNum <= 6)											// if random number is < 6 (which there is a 70% chance of) 
	{																// creates random priority number between 1-10, returns it
		int Prioritynumber = (rand() % 10) + 1;
		return Prioritynumber;
	}

	else if (percentNum > 6 && percentNum <= 8)						// if random number is between 6-8 created (20% chance)
	{
		int Prioritynumber = (rand() % 5) + 11;						// creates random priority number between 11-15, returns it
		return Prioritynumber;
	}
	else                                                            // if random number is a 9 (10% chance)
	{
		int Prioritynumber = (rand() % 5) + 16;						// creates random priority number between 16-20, returns it
		return Prioritynumber;
	}
}

void WaitingRoomQueue::DisplayNames()
{
	for (int i = 0; i < 150; i++)
	{
		std::cout << AssignPriorityNum() << std::endl;
	}
}
