// IteratorCollectionPattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "IIterator.h"
#include "IAggregate.h"
#include "ConcerteIterator.h"
#include "ConcreteAggregate.h"
#include "afxwin.h"
using namespace std;

class myObject :public CObject{
	std::string name;
public:
	myObject(std::string str){
		this->name = str;
	}

	std::string getName(){
		return name;
	}

};


int _tmain(int argc, _TCHAR* argv[])
{
	IAggregate* agg = new ConcreteAggregate();
	agg->add(new myObject("Object1"));
	agg->add(new myObject("Object2"));
	agg->add(new myObject("Object3"));

	IIterator* iterator = agg->iterator();

	std::string nameStr;

	while (iterator->hasNext()){
		nameStr = ((myObject*)iterator->next())->getName();
		printf("%s\n",nameStr.c_str());
	}

	return 0;
}

