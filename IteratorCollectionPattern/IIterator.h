#pragma once
#include "afxwin.h"
class IIterator
{
public:
	IIterator();
	virtual ~IIterator();

	virtual CObject* next() = 0;
	virtual bool hasNext() = 0;
	virtual bool remove() = 0;

};

