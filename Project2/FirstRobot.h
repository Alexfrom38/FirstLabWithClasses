#pragma once
#include<string>
enum Material
{
	steel,
	Al,
	Ti,
	Vs
};


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

protected:
	Material material;
	int height;
	
private:
	std::string name;
	int year;


};