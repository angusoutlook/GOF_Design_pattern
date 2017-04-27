#pragma once
#include "IElement.h"

#include <random>
using namespace std;

class IElement;
class ConcreteElementA;
class ConcreteElementB;

class ObjectStruture
{
public:
	ObjectStruture();
	~ObjectStruture();

	static IElement* createElement(){
		int i = rand();
		if (i >= 10000) {
			//return new ConcreteElementA();
		}
		else{
			//return new ConcreteElementB();
		}
	}
};

