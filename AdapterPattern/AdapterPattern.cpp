// AdapterPattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "ITarget.h"
#include "Adaptee.h"
#include "Adapter.h"
#include "ConcerteTarget.h"


int _tmain(int argc, _TCHAR* argv[])
{
	ITarget* target = new ConcerteTarget();
	target->Request();


	if (target != NULL) delete target;
	target = new Adapter();
	target->Request();

	return 0;
}

