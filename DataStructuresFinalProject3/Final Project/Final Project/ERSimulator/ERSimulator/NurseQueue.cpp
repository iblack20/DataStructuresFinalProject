#include "stdafx.h"
#include "NurseQueue.h"


void NurseQueue::update(int t, WaitingRoomQueue& v)
{
	if (TreatmentOffice.empty())
	{
		if (!v.lowPriorityQueue.empty())
		{
			startTime = t;
			endTime = t + rand() % 10;
			TreatmentOffice.push_back(v.lowPriorityQueue.top());
			v.lowPriorityQueue.pop();
		}
	}
	else
		{
		startTime = t;
			if (startTime == endTime)
			{
				TreatmentOffice[0].setPatientTime(t - TreatmentOffice[0].getPatientTime());
				TreatmentOffice[0].UpdateResidentInfo(TreatmentOffice[0].getPatientTime());
				Resident * Rptr = &TreatmentOffice[0];
				v.Residents.push_back(Rptr);
				TreatmentOffice.erase(TreatmentOffice.begin());
			}

		}

		
	
}
		