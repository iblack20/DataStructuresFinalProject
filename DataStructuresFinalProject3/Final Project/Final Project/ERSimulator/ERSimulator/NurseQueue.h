#pragma once
#include "TreatmentQueue.h"
#include "WaitingRoomQueue.h"

#include <iostream>
#ifndef NurseQueue_H_
#define NurseQueue_H_


class NurseQueue : public TreatmentQueue
{
private:
	int startTime;
	int endTime;
public:

	NurseQueue() {};
	void update(int t, WaitingRoomQueue& v);
};
#endif