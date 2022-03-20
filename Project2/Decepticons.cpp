#include "Decepticons.h"
#include <iostream>

void TDecepticons::shooting()
{
	std::cout << "the Decepticon" << ' ' << this << ' ' << " is shooting now: Boom-Boom" << std::endl;
}

TDecepticons::TDecepticons(int height, std::string name, Material material, Guns gun, bool IsGoodRobot) : TWarRobots(height, name, material, gun)
{
	this->IsGoodRobot = IsGoodRobot;
}



void TDecepticons::SetSide(bool IsGoodRobot)
{
	this->IsGoodRobot = IsGoodRobot;
}

bool TDecepticons::GetSide()
{
	return IsGoodRobot;
}
