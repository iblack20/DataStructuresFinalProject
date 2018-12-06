//////////////////////////
// Defines Resident class
//////////////////////////
#include <string>

#ifndef Resident_H_
#define Resident_H_
class Resident 
{
private:
	std::string name;
	int PriorityNumber;
	int Visits;
	int ArrivalTime;
	int DepartureTime;
	int TotalTime;
	int AvgTime;
public:
	Resident()
	{
		name = "";
		PriorityNumber = 0;
		Visits = 0;
		ArrivalTime = 0;
		DepartureTime = 0;
		TotalTime = 0;
		AvgTime = 0;
	}
	Resident(std::string n) { name = n; }
	int getPriotitynum();
	int getVisits();
	void incrementVisits();
	void setPrioritynum(int);
	void setArrivalTime(int);
	void setDepartureTime(int);
	void setTotalTime(int);
	void setAvgTime(int);

};
#endif
