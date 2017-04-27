#pragma once
#include "IStategy.h"
class ConcerteStategy1 :
	public IStategy
{
public:
	ConcerteStategy1();
	~ConcerteStategy1();

	virtual void doSomething(){
		printf("ConcerteStategy1 do Something!\n");
	}
};

