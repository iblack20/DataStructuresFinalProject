#include "stdafx.h"
#include "Resident.h"

int Resident::getPriotitynum()
{
	return PriorityNumber;
}

int Resident::getVisits()
{
	return Visits;
}

void Resident::incrementVisits()
{
Visits++;
}

void Resident::setPrioritynum(int p)
{
	PriorityNumber = p;
}

void Resident::setArrivalTime(int a)
{
	ArrivalTime = a;
}

void Resident::setDepartureTime(int d)
{
	DepartureTime = d;
}

void Resident::setTotalTime(int t)
{
	TotalTime = t;
}

void Resident::setAvgTime(int a)
{
	AvgTime = a;
}
