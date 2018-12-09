#pragma once
#include "TreatmentQueue.h"
#include <iostream>
#ifndef NurseQueue_H_
#define NurseQueue_H_


class NurseQueue : public TreatmentQueue
{
public:
	NurseQueue() {};
	void update();
};
#endif