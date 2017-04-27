#pragma once
#include <string>
using namespace std;

class IObserver
{
public:
	IObserver();
	virtual ~IObserver();

	virtual void update(std::string context) = 0;
};

