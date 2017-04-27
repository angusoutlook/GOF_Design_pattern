#pragma once
#include "IComponent.h"
class ConcreteComponent :
	public IComponent
{
public:
	ConcreteComponent();
	~ConcreteComponent();

	virtual void operate(){
		printf("do Something!\n");
	}
};

