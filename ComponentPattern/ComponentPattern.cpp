// ComponentPattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "IComponent.h"
#include "ConcreteDecorator1.h"
#include "ConcreteDecorator2.h"
#include "ConcreteComponent.h"


int _tmain(int argc, _TCHAR* argv[])
{
	IComponent* component = new ConcreteComponent();

	component = new ConcreteDecorator1(component);
	component = new ConcreteDecorator2(component);

	component->operate();

	return 0;
}

