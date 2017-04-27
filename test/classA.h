#pragma once

#ifndef CLASSB_H
#define CLASSB_H

#include "classB.h"
class classB;

class classA
{

public:
	classA();
	~classA();

	classB* p;
};

#endif

