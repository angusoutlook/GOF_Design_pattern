#pragma once
#include "IMemento.h"

class ICaretaker
{
public:
	ICaretaker();
	virtual ~ICaretaker();

	virtual IMemento* getMemento() = 0;
	virtual void setMemento(IMemento* memento) = 0;
};

class ConcreteCaretaker :public ICaretaker
{
private:
	IMemento* _memento;
public:
	ConcreteCaretaker(){

	}
	~ConcreteCaretaker(){

	}

	IMemento* getMemento(){
		return _memento;
	}
	void setMemento(IMemento* memento){
		this->_memento = memento;
	}
};

