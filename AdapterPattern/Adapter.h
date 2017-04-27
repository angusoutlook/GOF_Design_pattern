#pragma once
#include "ITarget.h"
#include "Adaptee.h"
class Adapter :
	public ITarget,public Adaptee
{
public:
	Adapter();
	~Adapter();

	virtual void Request(){
		Adaptee::doSomething();
	}
};

