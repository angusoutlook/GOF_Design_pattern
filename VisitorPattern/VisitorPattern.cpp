// VisitorPattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include "IElement.h"
#include "IVisitor.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	Visitor* vis = new ConcreteVisitorA();
	Element* elm = new ConcreteElementA();
	elm->Accept(vis);
	return 0;
}
