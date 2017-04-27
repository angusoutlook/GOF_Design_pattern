// CompositePattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Composite.h"
#include "IComponent.h"
#include "Leaf.h"
using namespace std;
#include <list>


int _tmain(int argc, _TCHAR* argv[])
{
	Composite* root = new Composite();
	root->doSomething();

	Composite * branch = new Composite();

	Leaf* leaf = new Leaf();

	root->add(branch);
	branch->add(leaf);

	return 0;
}

void display(Composite * root)
{
	//while (root->getChild()){

	//}
}

