// SingletonPattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Singleton.h"
#include "Emperor.h"

Singleton* Singleton::instance = NULL;
char Emperor::namelist[maxNumOfEmperor][32];
Emperor* Emperor::emperorList[maxNumOfEmperor];

int _tmain(int argc, _TCHAR* argv[])
{
	
	Singleton* instance = Singleton::getInstance();
	instance->doSomething();

	Emperor * instanceEmperor= Emperor::getInstance(0);
	instanceEmperor->say(0);

	return 0;
}

