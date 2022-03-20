#include "SetOfRobots.h"
#include <iostream>

SetOfRobots::SetOfRobots()
{
	CountOfRobots = 0;
	Set = nullptr;
}

SetOfRobots::~SetOfRobots()
{
	if (Set != nullptr)
		delete[] Set;
	  
}

void SetOfRobots::Print()
{
	for (int q = 0; q < CountOfRobots; q++)
	{
		Set[q]->shooting();
	}
}

void SetOfRobots::AddRobot(TWarRobots* robot)
{


	if (CountOfRobots == 0)
	{
		Set = new TWarRobots* [1];
		CountOfRobots = 1;
		Set[0] = robot;
	}
	else
	{
		TWarRobots** temporary = new TWarRobots* [CountOfRobots + 1];
		
		for ( int q = 0; q < CountOfRobots; q++)
		{
			temporary[q] = Set[q];
		}
		
		delete Set;
		Set = temporary;
		Set[CountOfRobots] = robot;
		CountOfRobots++;
	

	}
}
