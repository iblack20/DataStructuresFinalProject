//////////////////////////////
// Defines Hospital class
//////////////////////////////


#include "Resident.h"
#include "WaitingRoomQueue.h"
#include "DoctorQueue.h"
#include "NurseQueue.h"
#include <iterator>
#include <set>

class Hospital
{
private:
	std::set <Resident *> Residents;
	int PatientArrivalRate;
	int DoctorsWorking;
	int NursesWorking;

public:
	Hospital() 
	{
		PatientArrivalRate = 0;
		DoctorsWorking = 0;
		NursesWorking = 0;
	}	
	Hospital(int ArrivalRate, int Doctors, int Nurses)
	{
		PatientArrivalRate = ArrivalRate;
		DoctorsWorking = Doctors;
		NursesWorking = Nurses;
	}
	void Simulate();
	void Report();
	void addResident(Resident *);
	// void testResident(std::string name);
};