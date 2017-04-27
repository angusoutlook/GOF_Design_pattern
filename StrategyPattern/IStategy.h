#pragma once
class IStategy
{
public:
	IStategy();
	virtual ~IStategy();

	virtual void doSomething() = 0;
};

