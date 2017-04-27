#pragma once
#include "ICommand.h"
#include "Door.h"
class GarageDoorOpenCommand :
	public ICommand
{
	Door * door;
public:
	GarageDoorOpenCommand(Door* door){
		this->door = door;
	}
	~GarageDoorOpenCommand();

	void excute(){
		door->up();
		door->down();
		door->stop();
		door->lightOn();
		door->lightOff();
	}
};

