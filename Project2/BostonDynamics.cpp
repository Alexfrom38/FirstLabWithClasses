#include "BostonDynamics.h"
#include<iostream>
void TBostonDynamics::jump()
{
	std::cout << "i can jump" << std::endl;
}


TBostonDynamics::TBostonDynamics(int height, std::string name, Material material, int AI, int year)
{
	
	this->name = name;
	this->material = material;
	this->year = year;
	this->AI = AI;
}

