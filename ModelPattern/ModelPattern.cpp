// ModelPattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Tea.h"
#include "Coffee.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Tea* tea = new Tea();
	Coffee* coffee = new Coffee();

	tea->prepareRecipe();
	coffee->prepareRecipe();
	return 0;
}

