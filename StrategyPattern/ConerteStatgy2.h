#pragma once
#include "IStategy.h"
class ConerteStatgy2 :
	public IStategy
{
public:
	ConerteStatgy2();
	~ConerteStatgy2();

	virtual void doSomething(){
		printf("ConerteStatgy2 do Something!\n");
	}
};

