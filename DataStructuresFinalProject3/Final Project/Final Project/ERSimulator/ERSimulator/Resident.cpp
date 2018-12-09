#include "stdafx.h"
#include "Resident.h"

int Resident::getPrioritynum()
{
	return PriorityNumber;
}

int Resident::getVisits()
{
	return Visits;
}

int Resident::getPatientTime()
{
	return PatientTime;
}

void Resident::UpdateResidentInfo(int a)
{ 
    Visits++;
    illnessRecord.push_back(PriorityNumber);
	TotalTime = TotalTime + a;
	setPrioritynum(0);
}



int Resident::getTotalTime()
{
	return TotalTime;
}

void Resident::setPrioritynum(int p)
{
	PriorityNumber = p;
}

void Resident::setPatientTime(int t)
{
	PatientTime = t;
}

void Resident::updateRecord()
{
	illnessRecord.push_back(PriorityNumber);
}


std::string Resident::getName()
{
	return name;
}
