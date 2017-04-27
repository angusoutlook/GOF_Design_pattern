// HandlerPattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "IHandle.h"
#include "Response.h"
#include "ConcreteHandler1.h"
#include "ConcreteHandler2.h"
#include "ConcreteHandler3.h"


int _tmain(int argc, _TCHAR* argv[])
{
	IHandler* h1 = new ConcreteHandler1();
	IHandler* h2 = new ConcreteHandler2();
	IHandler* h3 = new ConcreteHandler3();

	h1->setNext(h2);
	h2->setNext(h3);

	Response* response = h1->handleMessage(new Request());

	return 0;
}

