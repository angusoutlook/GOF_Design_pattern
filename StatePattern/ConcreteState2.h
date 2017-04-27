#pragma once
#include "IState.h"
class ConcreteState2 :
	public State
{
public:
	ConcreteState2();
	~ConcreteState2();

	virtual void handle2(){

	}

	virtual void handle1(){
		State::context::setCurrentState(Context::STATE1);
		State::context::handle1();
	}
};

