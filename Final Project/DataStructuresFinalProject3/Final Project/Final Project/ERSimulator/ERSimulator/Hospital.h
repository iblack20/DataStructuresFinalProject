//////////////////////////////
// Defines Hospital class
//////////////////////////////


#include "Resident.h"
#include "WaitingRoomQueue.h"
#include "DoctorQueue.h"
#include "NurseQueue.h"
#include <iterator>
#include <set>
#include <vector>
#include <queue>

class Hospital
{
private:
	std::vector <TreatmentQueue *> h_queues;
	int DoctorsWorking;
	int NursesWorking;

public:
	Hospital() 
	{
		DoctorsWorking = 0;
		NursesWorking = 0;
	}	
	Hospital(int Doctors, int Nurses)
	{
		DoctorsWorking = Doctors;
		NursesWorking = Nurses;
	}
	void Simulate();
	void Report();
	
};