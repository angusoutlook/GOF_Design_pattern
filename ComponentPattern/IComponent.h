#pragma once
class IComponent
{
public:
	IComponent();
	virtual ~IComponent();

	virtual void operate() = 0;
};

