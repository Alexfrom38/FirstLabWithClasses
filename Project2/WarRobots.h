#pragma once
#include "FirstRobot.h"
#include "EnumGuns.h"
#include <string>
class TWarRobots : public TFirstRobot
{
protected:
	Guns gun;
	
public:
	TWarRobots(int height, std::string name, Material material,Guns gun);
	void SetGun(Guns gun);
	Guns GetGun();
	virtual void shooting();
private:
	std::string name;
};