#pragma once
#include "IComponent.h"
using namespace std;
#include <list>

class Composite :
	public IComponent
{
private:
	list<IComponent*> componentList;

public:
	Composite();
	~Composite();

	void add(IComponent* component){
		this->componentList.push_back(component);
	}

	void remove(IComponent* component){
		this->componentList.remove(component);
	}

	list<IComponent*> getChild(){
		return this->componentList;
	}

	virtual void doSomething(){

	}
};

