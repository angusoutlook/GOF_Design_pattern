#pragma once
#include "ITurkey.h"
class WildTurkey :
	public ITurkey
{
public:
	WildTurkey();
	~WildTurkey();

	virtual void gobble(){
		printf("Gobble gobble!\n");
	}

	virtual void fly(){
		printf("I'm flying a short distance!\n");
	}
};

