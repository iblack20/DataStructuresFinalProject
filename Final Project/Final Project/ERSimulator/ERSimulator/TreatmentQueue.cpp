#include "stdafx.h"
#include "TreatmentQueue.h"

int TreatmentQueue::PriorityNum()
{
	srand(time(NULL));
	int percentNum = rand() % 9;

	if (percentNum <= 6)
	{
		int newnum = (rand() % 9) + 1;
		return newnum;
	}

	else if (percentNum > 6 && percentNum <= 8)
	{
		int newnum = (rand() % 4) + 11;
		return newnum;
	}
	else
	{
		int newnum = (rand() % 4) + 16;
		return newnum;
	}
}