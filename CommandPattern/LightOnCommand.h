#pragma once
#include "ICommand.h"
#include "Light.h"
class LightOnCommand :
	public ICommand
{
	Light* light;
public:
	LightOnCommand(Light* light){
		this->light = light;
	}

	void excute(){
		light->on();
	}
	~LightOnCommand();
};

