// AdapterFacadePattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "IDuck.h"
#include "ITurkey.h"
#include "MallardDuck.h"
#include "TurkeyAdapter.h"
#include "WildTurkey.h"

void testDuck(IDuck* duck);


int _tmain(int argc, _TCHAR* argv[])
{
	MallardDuck* duck = new MallardDuck();
	WildTurkey* turkey = new WildTurkey();
	IDuck* turkeyAdapter = new TurkeyAdapter(turkey);

	turkey->gobble();
	turkey->fly();

	testDuck(duck);
	testDuck(turkeyAdapter);
	return 0;
}

void testDuck(IDuck* duck){
	duck->quack();
	duck->fly();
}
