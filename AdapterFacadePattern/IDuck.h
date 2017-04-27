#pragma once
class IDuck
{
public:
	IDuck();
	virtual ~IDuck();

	virtual void quack()=0;
	virtual void fly()=0;
};

