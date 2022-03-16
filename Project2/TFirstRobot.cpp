#include "FirstRobot.h"
#include<iostream>

int TFirstRobot::GetHeight()
{
	return height;
}

int TFirstRobot::GetYear()
{
	return 0;
}

Material TFirstRobot::GetMaterial()
{
	return material;
}

TFirstRobot::TFirstRobot(int height, std::string name, Material material)
{
	this->height = height;
	this->name = name;
	this->material = material;
}

TFirstRobot::TFirstRobot()
{
}

std::string TFirstRobot::GetName()
{
	return std::string();
}

void TFirstRobot::SetMaterial(Material NewM)
{
	material = NewM;
}

void TFirstRobot::DoingSomethig()
{
	std::cout << "i'm doing something" << std::endl;
}

void TFirstRobot::SetName(std::string NewName)
{
	name = NewName;
}
