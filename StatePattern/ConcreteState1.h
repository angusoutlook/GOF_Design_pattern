#pragma once
#include "IState.h"

class ConcreteState1 :
	public IState
{
public:
	ConcreteState1();
	~ConcreteState1();

	virtual void handle1(){

	}

	virtual void handle2(){
		IState::context->setCurrentState(IContext::STATE2);
		IState::context->handle2();
	}
};

