//////////////////////////////////
// Declares TreatmentQueue class
//////////////////////////////////
#include "Resident.h"
#include <queue>
#include <vector>
#include <cstdlib>
#include <ctime>

#ifndef TreatmentQueue_H_
#define TreatmentQueue_H_


class TreatmentQueue
{
public:
	TreatmentQueue() {}
	std::priority_queue<Resident> r_queue;			
	virtual void update() = 0;
	int randomTime(int max);
	
};

#endif