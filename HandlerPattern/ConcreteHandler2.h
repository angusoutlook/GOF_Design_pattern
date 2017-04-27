#pragma once
#include "IHandle.h"
#include "Request.h"
#include "Response.h"

class ConcreteHandler2 :
	public IHandler
{
public:
	ConcreteHandler2();
	~ConcreteHandler2();
protected:
	virtual Response* echo(Request* request){
		return NULL;
	}

	virtual Level* getHandlerLevel(){
		return NULL;
	}
};

