#pragma once
#include "WarRobots.h"
#include"Optimus.h"
class SetOfRobots
{public:

	SetOfRobots();
	~SetOfRobots();

	void Print();

	

	void AddRobot(TWarRobots* robot);

private:
  TWarRobots** Set;
	int CountOfRobots;

};