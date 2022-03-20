#include <iostream>
#include "Autobots.h"
#include "Decepticons.h"
#include "SetOfRobots.h"
 int main()
{
	 
	TAutobots Opt(10000,"Optimus", Ti,G2A42,true);
	TDecepticons Mgtr(10000, "Megatrone", Ti, G2A65, false);



	SetOfRobots set;
	set.AddRobot(&Opt);
	set.AddRobot(&Mgtr);
	set.Print();


	return 0;

}