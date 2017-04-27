#pragma once
#include "IAggregate.h"
#include "afxwin.h"
#include <vector>
#include "IIterator.h"
#include "ConcerteIterator.h"

using namespace std;

class ConcreteAggregate :
	public IAggregate
{
private:
	vector<CObject*> _vector ;
public:
	ConcreteAggregate();
	~ConcreteAggregate();

	void add(CObject* object){
		this->_vector.push_back(object);
	}

	IIterator* iterator(){
		return new ConcerteIterator(this->_vector);
	}

	void remove(CObject* object){
		this->remove(object);
	}

};

