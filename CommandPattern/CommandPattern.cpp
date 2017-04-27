// CommandPattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "SimpleRemoteControl.h"
#include "Light.h"
#include "LightOnCommand.h"
#include "Door.h"
#include "GarageDoorOpenCommand.h"


int _tmain(int argc, _TCHAR* argv[])
{
	SimpleRemoteControl* remote = new SimpleRemoteControl();
	Light* light = new Light();
	LightOnCommand* lightOn = new LightOnCommand(light);
	remote->setCommand(lightOn);
	remote->buttonWasPressed();

	Door* door = new Door();
	GarageDoorOpenCommand* garageOpen = new GarageDoorOpenCommand(door);
	remote->setCommand(garageOpen);
	remote->buttonWasPressed();

	return 0;
}

