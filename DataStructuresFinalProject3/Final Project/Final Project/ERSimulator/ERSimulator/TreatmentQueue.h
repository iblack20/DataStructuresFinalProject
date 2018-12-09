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


class WaitingRoomQueue;
class TreatmentQueue
{
private:
	int PatientTime;
public:
	TreatmentQueue() {}
	virtual void update(int t, WaitingRoomQueue& v) = 0;
	int randomTime(int max);
	std::vector <Resident> TreatmentOffice;
};

#endif