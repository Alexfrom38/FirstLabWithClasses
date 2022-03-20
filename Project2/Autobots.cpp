#include "Autobots.h"
#include <iostream>

void TAutobots::shooting()
{
	std::cout << "the Autobot" << ' ' << this << ' ' << " is shooting now: Boom-Boom" << std::endl;
}

TAutobots::TAutobots(int height, std::string name, Material material, Guns gun, bool IsGoodRobot): TWarRobots(height, name, material, gun)
{
	this->IsGoodRobot = IsGoodRobot;
}


void TAutobots::SetSide(bool IsGoodRobot)
{
	this->IsGoodRobot = IsGoodRobot;
}

bool TAutobots::GetSide()
{
	return IsGoodRobot;
}
