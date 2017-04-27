#pragma once
#include "ITarget.h"
class ConcerteTarget :
	public ITarget
{
public:
	ConcerteTarget();
	~ConcerteTarget();

	virtual void Request(){
		printf("if you need any help,please call me !\n");
	}
};

