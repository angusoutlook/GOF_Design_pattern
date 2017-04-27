#pragma once
//#include "ICommand.h"
class Light
//	:public ICommand
{
public:
	Light();
	~Light();
	void on(){
		printf("Light is on\n");
	}
};

