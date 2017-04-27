#pragma once
#include "IObserver.h"
class Wangsi :
	public IObserver
{
private:
	void cry(std::string context){
		printf("Wangsi is crying!\n");
	}

public:
	Wangsi();
	~Wangsi();

	void update(std::string context){
		printf("Wangsi observe HanFeizi activity,begin to report to king Qing!\n");
		this->cry(context);
		printf("Wangsi finished report!\n");
	}
};

