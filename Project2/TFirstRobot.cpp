#include "FirstRobot.h"
#include <iostream>

int TFirstRobot::GetHeight()
{
	return height;
}

int TFirstRobot::GetYear()
{
	return year;
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
	return name;
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

void TFirstRobot::SetHeight(int height)
{
	this->height = height;
}

void TFirstRobot::Foo()
{
	std::cout << "I'm TFirstRobot" << ' ' << this << std::endl;

}


