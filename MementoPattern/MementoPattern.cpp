// MementoPattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "ICaretaker.h"
#include "IMemento.h"
#include "IOriginator.h"
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	IOriginator* pOriginator = new ConcreteOriginator();
	ICaretaker* pCaretaker = new ConcreteCaretaker();

	pOriginator->setState("state one");
	printf("%s\n", pOriginator->getState().c_str());
	pCaretaker->setMemento(pOriginator->createMemento());

	pOriginator->setState("state two");
	printf("%s\n", pOriginator->getState().c_str());
	pOriginator->restoreMemento(pCaretaker->getMemento());
	printf("%s\n", pOriginator->getState().c_str());

	return 0;
}

