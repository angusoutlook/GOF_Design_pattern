#pragma once
#include "ICommand.h"
class SimpleRemoteControl
{
	ICommand* slot;
public:
	SimpleRemoteControl();
	~SimpleRemoteControl();
	void setCommand(ICommand* command){
		slot = command;
	}

	void buttonWasPressed(){
		slot->excute();
	}
};

