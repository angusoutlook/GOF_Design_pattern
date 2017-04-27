#pragma once
#include <string>
#include "IMemento.h"

using namespace std;

class IOriginator
{
public:
	IOriginator();
	virtual ~IOriginator();

	virtual void setState(string state) = 0;
	virtual std::string getState() = 0;
	virtual IMemento* createMemento() = 0;
	virtual void restoreMemento(IMemento* _memento) = 0;
};

class ConcreteOriginator :
	public IOriginator
{
private:
	string state;

public:
	ConcreteOriginator(){

	}

	~ConcreteOriginator(){

	}

	virtual void setState(string _state){
		this->state = _state;
	}

	virtual std::string getState(){
		return this->state;
	}

	virtual IMemento* createMemento(){
		IMemento* memento = new ConcreteMemento(this->state);
		return memento;
	}

	void restoreMemento(IMemento* _memento){
		this->setState(_memento->getState());
	}
};

