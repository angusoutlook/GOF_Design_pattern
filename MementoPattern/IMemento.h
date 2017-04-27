#pragma once
#include <string>

class IMemento
{

public:
	IMemento();
	virtual ~IMemento();

	virtual std::string getState() = 0;
	virtual void setState(std::string state) = 0;

};

class ConcreteMemento :
	public IMemento
{
private:
	std::string state;

public :
	ConcreteMemento(){

	}

	~ConcreteMemento(){

	}

	ConcreteMemento(std::string _state){
		this->state = _state;
	}

	virtual std::string getState(){
		return this->state;
	}

	virtual void setState(std::string _state){
		this->state = _state;
	}
};