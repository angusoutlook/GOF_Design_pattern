// StrategyPattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "IStategy.h"
#include "ConcerteStategy1.h"
#include "ConerteStatgy2.h"
#include "Context.h"


int _tmain(int argc, _TCHAR* argv[])
{
	IStategy* stategy = new ConcerteStategy1();
	Context* context = new Context(stategy);
	context->doAnything();

	if (context != NULL) delete context;
	if (stategy != NULL) delete stategy;

	stategy = new ConerteStatgy2();
	context = new Context(stategy);

	context->doAnything();

	

	return 0;
}

