#include "WarRobots.h"
#include <iostream>
void TWarRobots::shooting()
{
	std::cout << "the WarRobot" << ' ' << this << ' ' << " is shooting now: bah-bah-bah" << std::endl;
}

TWarRobots::TWarRobots(int height, std::string name, Material material, Guns gun) : TFirstRobot(height, name, material)
{
	this->gun = gun;
}

void TWarRobots::SetGun(Guns gun)
{
	this->gun = gun;
}

Guns TWarRobots::GetGun()
{
	return gun;
}
