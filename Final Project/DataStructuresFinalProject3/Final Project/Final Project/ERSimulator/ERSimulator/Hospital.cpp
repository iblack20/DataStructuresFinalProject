#include "stdafx.h"
#include "Hospital.h"

void Hospital::addQueues(TreatmentQueue &q)
{
	TreatmentQueue * Qptr = &q ;
	
	h_queues.push_back(Qptr);
}

void Hospital::addQueuePtr(TreatmentQueue * q)
{
	h_queues.push_back(q);
}

void Hospital::Simulate()
{
	for (int t = 0; t < TotalRunTime; t++)
	{																	// Update waitingroomqueue
		for (unsigned int i = 0; i < h_queues.size(); i++)
		{
			h_queues[i]->update();										// update queue of nurses and doctors, pass in waitingroomqueue
		}
	}
}

//void Hospital::Report()
//{
	// for (int i = 0; i < h_queues.size(); i++) {

//		std::cout << h_queues[i]->r_queue[i];
//	}
//}
