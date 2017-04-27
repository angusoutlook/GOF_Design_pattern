#pragma once
#include "IDuck.h"
class MallardDuck :
	public IDuck
{
public:
	MallardDuck();
	~MallardDuck();

	virtual void quack(){
		printf("Quack!\n");
	}

	virtual void fly(){
		printf("I'm flying!\n");
	}
};

