#pragma once
class IHanFeizi
{
public:
	IHanFeizi();
	virtual ~IHanFeizi();

	virtual void haveBreakfast() = 0;
	virtual void haveFun() = 0;
};

