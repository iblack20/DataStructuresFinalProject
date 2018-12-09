#pragma once
#include "TreatmentQueue.h"
#include "WaitingRoomQueue.h"
#include <iostream>

#ifndef DoctortQueue_H_
#define DoctorQueue_H_

class DoctorQueue : public TreatmentQueue
{
public:
	DoctorQueue() {};
	void update(int t, WaitingRoomQueue& v);
};
#endif