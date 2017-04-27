#pragma once
#include "Request.h"
#include "Response.h"

class IHandler
{
public:
	IHandler();
	virtual ~IHandler();



	Response* handleMessage(Request* request){
		Response* response = NULL;
		if (this->getHandlerLevel() == request->getRequestLevel()){
			response = this->echo(request);
		}
		else{
			if (this->nextHandler != NULL){
				response = this->nextHandler->handleMessage(request);
			}
		}
		return response;
	}

	void setNext(IHandler* _handler){
		this->nextHandler = _handler;
	}
protected:
	virtual Level* getHandlerLevel() = 0;
	virtual Response* echo(Request* request) = 0;
private:
	IHandler* nextHandler;

};

