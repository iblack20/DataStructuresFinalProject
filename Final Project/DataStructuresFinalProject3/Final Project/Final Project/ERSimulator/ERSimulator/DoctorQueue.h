#pragma once
#include "TreatmentQueue.h"


#ifndef DoctortQueue_H_
#define DoctorQueue_H_

class DoctorQueue : public TreatmentQueue
{
public:
	DoctorQueue() {};
	void update();
};
#endif