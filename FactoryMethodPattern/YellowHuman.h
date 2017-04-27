#pragma once
#include "IHuman.h"
class YellowHuman :
	public IHuman
{
public:
	YellowHuman();
	~YellowHuman();

	virtual void getColor(){
		printf("Yellowman's skin is yellow!\n");
	}

	virtual void talk(){
		printf("Yellowman is talking!\n");
	}
};

