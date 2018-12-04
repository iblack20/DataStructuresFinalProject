//////////////////////////////////
// Declares TreatmentQueue class
//////////////////////////////////
#include "Resident.h"
#include <queue>
#include <cstdlib>
#include <ctime>

#ifndef TreatmentQueue_H_
#define TreatmentQueue_H_


class TreatmentQueue
{
public:
	TreatmentQueue() {}
	std::queue<Resident *> r_queue;
	virtual void update(int t) = 0;
	int randomTime(int max);
	int PriorityNum();
};

#endif