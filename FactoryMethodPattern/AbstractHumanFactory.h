#pragma once
#include "IHuman.h"
class AbstractHumanFactory
{
public:
	AbstractHumanFactory();
	virtual ~AbstractHumanFactory();

	virtual IHuman* createHuman() = 0;
};

