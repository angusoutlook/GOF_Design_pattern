#pragma once
#include "ICommand.h"

class RemoteControl
{

	static const int cmdCount = 7;

	ICommand* onCommands[cmdCount];
	ICommand* offCommands[cmdCount];
public:
	RemoteControl();
	~RemoteControl();

	void setCommand(int slot, ICommand * onCommand, ICommand * offCommand){
		if (slot >= 0 && slot <= 6){
			onCommands[slot] = onCommand;
			offCommands[slot] = offCommand;
		}
	}

	void onButtenWasPushed(int slot){
		onCommands[slot]->excute();
	}

	void offButtenWasPushed(int slot){
		offCommands[slot]->excute();
	}

	char* toString(){
		for (int i = 0; i < 7; i++){
			printf("slot[%d]\n",i);
		}
	}

};

