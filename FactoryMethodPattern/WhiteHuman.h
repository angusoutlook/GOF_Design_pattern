#pragma once
#include "IHuman.h"
class WhiteHuman :
	public IHuman
{
public:
	WhiteHuman();
	~WhiteHuman();

	virtual void getColor(){
		printf("Whiteman's skin is white!\n");
	}

	virtual void talk(){
		printf("Whiteman is talking!\n");
	}
};

