#include "stdafx.h"
#include "Hospital.h"


void Hospital::Simulate()
{
	for (int t = 0; t < TotalRunTime; t++)
	{																			
		W1.update(t, W1);																		// Update waitingroomqueue
		for (unsigned int i = 0; i < h_queues.size(); i++)
		{
			h_queues[i]->update(t, W1);										// update queue of nurses and doctors, pass in waitingroomqueue
		}
	}
}

void Hospital::Report()
{

}

