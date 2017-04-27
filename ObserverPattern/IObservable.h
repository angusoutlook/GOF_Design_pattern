#pragma once
#include <string>
using namespace std;
#include "IObserver.h"

class IObservable
{
public:
	IObservable();
	virtual ~IObservable();

	virtual void addObserver(IObserver* observer) = 0;
	virtual void removeObserver(IObserver* observer) = 0;
	virtual void notifyObserver(std::string context) = 0;
};

