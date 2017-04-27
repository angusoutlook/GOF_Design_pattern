#include "stdafx.h"
#include "IDecorator.h"


IDecorator::IDecorator(IComponent* _component)
{
	this->component = _component;
}


IDecorator::~IDecorator()
{
}
