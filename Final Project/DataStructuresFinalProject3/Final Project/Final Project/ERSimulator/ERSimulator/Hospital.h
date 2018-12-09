//////////////////////////////
// Defines Hospital class
//////////////////////////////


#include "Resident.h"
#include "TreatmentQueue.h"
#include "WaitingRoomQueue.h"
#include "DoctorQueue.h"
#include "NurseQueue.h"
#include <iostream>
#include <iterator>
#include <set>
#include <vector>
#include <queue>

class Hospital
{
private:
	std::vector <TreatmentQueue *> h_queues;  // have h_queue only hold nurses and doctor, just variable for WaitingroomQueue
	int DoctorsWorking;
	int NursesWorking;
	int TotalRunTime;

public:
	Hospital() 
	{
		DoctorsWorking = 0;
		NursesWorking = 0;
		TotalRunTime = 0;
	}	
	Hospital(int Doctors, int Nurses, int days)
	{
		DoctorsWorking = Doctors;
		NursesWorking = Nurses;
		TotalRunTime = days * 24 * 60;
	}
	void addQueues(TreatmentQueue &q);
	void addQueuePtr(TreatmentQueue *q);
	void Simulate();
	void Report();
	
};