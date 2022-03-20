#pragma once
#include "EnumMaterial.h"
#include <string>


class TFirstRobot
{
public:
	Material GetMaterial();

	TFirstRobot(int height, std::string name, Material material);
  TFirstRobot();

	void DoingSomethig();

	int GetHeight();
	int GetYear();
	std::string GetName();

	void SetMaterial(Material NewM);
	void SetName(std::string NewName);
	void SetHeight(int height);

	virtual void Foo();

protected:
	Material material;
	int height;

	
private:
	std::string name;
	int year;


};