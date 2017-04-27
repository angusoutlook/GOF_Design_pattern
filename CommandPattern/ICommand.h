#pragma once
class ICommand
{
public:
	ICommand();
	virtual ~ICommand();

	virtual void excute() = 0;
	
};

