#pragma once
#include "IComponent.h"
class IDecorator :
	public IComponent
{
private:
	IComponent* component = NULL;
public:
	IDecorator(){

	}
	IDecorator(IComponent* _component);
	virtual ~IDecorator();

	virtual void operate(){
		this->component->operate();
	}
};

