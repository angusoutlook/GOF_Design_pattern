#pragma once
#include "IHuman.h"
class BlackHuman :
	public IHuman
{
public:
	BlackHuman();
	~BlackHuman();

	virtual void getColor(){
		printf("Blackman's skin is balck!\n");
	}

	virtual void talk(){
		printf("Blackman is talking!\n");
	}
};

