#pragma once
#include "IIterator.h"
#include <vector>
using namespace std;

class ConcerteIterator :
	public IIterator
{
private:
	std::vector<CObject*> _vector;
public:
	ConcerteIterator();
	~ConcerteIterator();

	int cursor = 0;

	ConcerteIterator(std::vector<CObject*> vector){
		this->_vector = vector;
	}

	virtual bool hasNext(){
		if (this->cursor == this->_vector.size()){
			return false;
		}
		else{
			return true;
		}
	}

	virtual CObject* next(){
		CObject* result = NULL;
		if (this->hasNext()){
			result = this->_vector.at(this->cursor++);
		}
		else{
			result = NULL;
		}
		return result;
	}

	virtual bool remove(){
		vector<CObject*>::iterator Iter;
		Iter = this->_vector.begin();
		for (int i = 0; i < cursor; i++){
			Iter++;
		}
		this->_vector.erase(Iter);
		return true;
	}
};

