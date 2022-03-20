#pragma once
#include"FirstRobot.h"
#include<string>
class TBostonDynamics : public TFirstRobot
{
public:
	void jump();
	TBostonDynamics(int height, std::string name, Material material, int AI, int year);
	virtual void Foo();
protected:
	Material material;
	double AI;
	
private:
	std::string name;
	int year;		

};