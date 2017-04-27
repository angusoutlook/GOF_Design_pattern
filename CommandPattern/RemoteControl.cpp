#include "stdafx.h"
#include "RemoteControl.h"


RemoteControl::RemoteControl()
{
	for (int i = 0; i < 7; i++){
		onCommands[i] = NULL;
		offCommands[i] = NULL;
	}
}


RemoteControl::~RemoteControl()
{
}
