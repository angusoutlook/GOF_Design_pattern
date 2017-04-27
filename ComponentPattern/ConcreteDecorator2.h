#pragma once
#include "IDecorator.h"
class ConcreteDecorator2 :
	public IDecorator
{
public:
	ConcreteDecorator2();
	~ConcreteDecorator2();
	ConcreteDecorator2(IComponent* _component) :IDecorator(_component){

	}

private:
	void Method2(){
		printf("method2!\n");
	}

public:
	void operate(){
		IDecorator::operate();
		this->Method2();
	}
};

