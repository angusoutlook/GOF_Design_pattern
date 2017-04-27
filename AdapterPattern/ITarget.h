#pragma once
class ITarget
{
public:
	ITarget();
	virtual ~ITarget();

	virtual void Request() = 0;
};

