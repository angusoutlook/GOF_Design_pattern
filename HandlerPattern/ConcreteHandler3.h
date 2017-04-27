#pragma once
#include "IHandle.h"
#include "Request.h"
#include "Response.h"

class ConcreteHandler3 :
	public IHandler
{
public:
	ConcreteHandler3();
	~ConcreteHandler3();
protected:
	virtual Response* echo(Request* request){
		return NULL;
	}
	
	virtual Level* getHandlerLevel(){
		return NULL;
	}
};

