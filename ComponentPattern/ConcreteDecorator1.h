#pragma once
#include "IDecorator.h"
class ConcreteDecorator1 :
	public IDecorator
{
public:
	ConcreteDecorator1();
	~ConcreteDecorator1();
	ConcreteDecorator1(IComponent* _component):IDecorator(_component){

	}

	void operate(){
		this->Method1();
		IDecorator::operate();
	}
private:
	void Method1(){
		printf("method1! \n");
	}
};

