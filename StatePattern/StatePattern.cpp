// StatePattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

//main.cpp
#include "IContext.h"
#include "IState.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	State* st = new ConcreteStateA();
	Context* con = new Context(st);
	con->OperationChangState();
	con->OperationChangState();
	con->OperationChangState();
	if (con != NULL)
		delete con;
	if (st != NULL)
		st = NULL;
	return 0;
}