#pragma once
#include "IDuck.h"
#include "ITurkey.h"

class TurkeyAdapter :
	public IDuck
{
	ITurkey* turkey;
public:
	TurkeyAdapter();
	~TurkeyAdapter();

	TurkeyAdapter(ITurkey* turkey){
		this->turkey = turkey;
	}

	virtual void quack(){
		this->turkey->gobble();
	}

	virtual void fly(){
		for (int i = 0; i < 5; i++){
			turkey->fly();
		}
	}
};

