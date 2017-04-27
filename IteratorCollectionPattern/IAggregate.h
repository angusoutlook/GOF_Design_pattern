#pragma once
#include "afxwin.h"
#include "IIterator.h"
class IAggregate
{
public:
	IAggregate();
	virtual ~IAggregate();

	virtual void add(CObject* object) = 0;
	virtual void remove(CObject* object) = 0;

	virtual IIterator* iterator()=0;

};

