//////////////////////////////////
// Declares TreatmentQueue class
//////////////////////////////////
#include "Resident.h"
#include <queue>


class TreatmentQueue
{
public:
	TreatmentQueue() {}
	std::queue<Resident *> r_queue;
	virtual void update() = 0;
};
