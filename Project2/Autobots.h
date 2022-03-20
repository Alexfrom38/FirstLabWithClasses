#pragma once
#include "FirstRobot.h"
#include "WarRobots.h"
#include <string>
class TAutobots : public TWarRobots 
{
public:
	virtual void shooting();
	TAutobots(int height, std::string name, Material material, Guns gun, bool IsGoodRobot);
	
	void SetSide(bool IsGoodRobot);
	bool GetSide();

protected:
	int hp;
	bool IsGoodRobot;

private:
	int count;
	std::string name;


};