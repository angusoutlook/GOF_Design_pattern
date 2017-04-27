#pragma once
class ITurkey
{
public:
	ITurkey();
	virtual ~ITurkey();

	virtual void gobble() = 0;
	virtual void fly() = 0;
};

