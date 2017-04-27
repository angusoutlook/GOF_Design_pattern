#pragma once
#include "ICaffeineBeverage.h"
class Coffee :
	public ICaffeineBeverage
{
public:
	Coffee();
	~Coffee();

	virtual void brew(){
		printf("Dripping Coffee through filter!\n");
	}

	virtual void addCondiments(){
		printf("Adding Sugar and Milk!\n");
	}

	bool customWantsCondiments(){
		return false;
	}
};

