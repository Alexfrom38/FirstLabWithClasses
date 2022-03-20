#include "Optimus.h"
#include <iostream>

void TOptimus::shooting()
{
	std::cout << "Optimus" << ' ' << this << ' ' << " is shooting now : Boom - Boom" << std::endl;
}

TOptimus::TOptimus() : TAutobots( height, name, material, gun, IsGoodRobot)
{
	this->IsGoodRobot = IsGoodRobot;
}


