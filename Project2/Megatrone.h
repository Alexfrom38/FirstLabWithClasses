#pragma once
#include "Decepticons.h"
#include <string>
class TMegatrone : public TDecepticons
{
public:
	virtual void shooting();

private:
	std::string name;

};