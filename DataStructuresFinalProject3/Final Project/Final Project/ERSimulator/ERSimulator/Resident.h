//////////////////////////
// Defines Resident class
//////////////////////////
#include <string>
#include <vector>

#ifndef Resident_H_
#define Resident_H_
class Resident 
{
private:
	std::string name;
	int PriorityNumber;
	int Visits;
	int PatientTime;
	int TotalTime;
	std::vector<int> illnessRecord;
public:
	Resident()
	{
		name = "";
		PriorityNumber = 0;
		Visits = 0;
		PatientTime = 0;
		TotalTime = 0;
	}
	Resident(std::string n) { name = n; }
	int getPrioritynum();
	int getVisits();
	int getPatientTime();
	void UpdateResidentInfo(int a);
	int getTotalTime();
	void setPrioritynum(int);
	void setPatientTime(int);
	void updateRecord();
	std::string getName();
	bool operator< (const Resident &r2) const
		{
			return PriorityNumber < r2.PriorityNumber;
		}
};
#endif
