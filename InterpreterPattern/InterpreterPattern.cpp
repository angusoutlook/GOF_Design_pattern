// InterpreterPattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include "Context.h"
#include "Interpret.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	Context* c = new Context();
	abstractExpression* te = new TerminalExpression("hello");
	abstractExpression* ne = new NonterminalExpression(te, 2);

	ne->Interpret(*c);

	return 0;
}

