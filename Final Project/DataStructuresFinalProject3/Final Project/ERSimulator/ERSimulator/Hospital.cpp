#include "stdafx.h"
#include "Hospital.h"

void Hospital::addResident(Resident * r)
{
	Residents.insert(r);
}

/*
void Hospital::testResident(std::string name)
{
	std::set<Resident *>::iterator r = Residents.find(Resident(name));
}
*/