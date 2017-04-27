#pragma once
class IComponent
{
public:
	IComponent();
	virtual ~IComponent();

	virtual void doSomething()=0;
};

