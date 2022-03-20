#include "BostonDynamics.h"
#include <iostream>
void TBostonDynamics::jump()
{
	std::cout << "i can jump" << std::endl;
}


TBostonDynamics::TBostonDynamics(int height, std::string name, Material material, int AI, int year) : TFirstRobot(height, name, material)
{
	
	this->name = name;
	this->material = material;
	this->year = year;
	this->AI = AI;
}

 void TBostonDynamics::Foo() 
{
	 std::cout << "I'm TBostonDynamicsRobot" << ' ' << this << std::endl;
}

