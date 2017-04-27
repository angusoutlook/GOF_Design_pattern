#pragma once

#ifndef CLASSA_H
#define CLASSA_h

#include "classA.h"

class classA;

class classB
{
public:
	classB();
	~classB();

	classA* p;
};

#endif

