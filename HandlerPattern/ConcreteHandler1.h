#pragma once
#include "IHandle.h"
#include "Request.h"
#include "Response.h"

class ConcreteHandler1 :
	public IHandler
{
public:
	ConcreteHandler1();
	~ConcreteHandler1();
protected:
	virtual Level* getHandlerLevel(){
		return NULL;
	}

	virtual Response* echo(Request* request){
		return NULL;
	}
};

