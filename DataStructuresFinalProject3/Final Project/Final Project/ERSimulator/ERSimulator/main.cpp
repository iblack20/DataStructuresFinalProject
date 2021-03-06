// Main.cpp : Defines the entry point for the console application.
//
#pragma once

#include "stdafx.h"
#include "Hospital.h"
#include "WaitingRoomQueue.h"
#include "TreatmentQueue.h"
#include "Resident.h"
#include <iostream>

using std::cout;
using std::endl;
using std::cin;
int main()
{
	srand(time(NULL));
	// Prompt user to enter required data values
	int docs, nurses, days;
	double hourlypatients;
	cout << "Welcome to the Simville Hopsital Simulator!" << endl << "Enter the average number of patients admitted to the hospital per hour: ";
	cin >> hourlypatients;
	cout << endl << "Enter the number of doctors working in the Emergency room: ";
	cin >> docs;
	cout << endl << "Enter the number of nurses working in the emergency room: ";
	cin >> nurses;
	cout << endl;
	cout << "Enter the number of days the hospital will be running: ";
	cin >> days;
	cout << endl;

	// create hospital passing in user input
	Hospital H1(docs, nurses, days,hourlypatients);
	


	H1.Simulate();
	cout << "Done!";
	//W1.DisplayNames();
	

    return 0;
}

