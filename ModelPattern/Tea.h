#pragma once
#include "ICaffeineBeverage.h"
class Tea :
	public ICaffeineBeverage
{
public:
	Tea();
	~Tea();

	virtual void brew(){
		printf("Stepping the tea!\n");
	}

	virtual void addCondiments(){
		printf("Adding Lemon!\n");
	}
};

