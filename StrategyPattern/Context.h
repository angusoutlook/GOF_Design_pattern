#pragma once
#include "IStategy.h"
class Context
{
private:
	IStategy* stategy = NULL;
public:
	Context();
	~Context();

	Context(IStategy* _stategy){
		this->stategy = _stategy;
	}

	void doAnything(){
		this->stategy->doSomething();
	}
};

