#pragma once
#include "ITurkey.h"
#include "IDuck.h"

class DuckAdapter :
	public ITurkey
{
	IDuck* duck;
public:
	DuckAdapter();
	~DuckAdapter();

	DuckAdapter(IDuck* duck){
		this->duck = duck;
	}

	virtual void gobble(){
		duck->quack();
	}

	virtual void fly(){
		duck->fly();
	}
};

