#pragma once
#include "IObserver.h"
class Lisi :
	public IObserver
{
private:
	void reportToQin(std::string context){
		printf("Lisi report that HanFeizi has activity!\n");
	}

public:
	Lisi();
	~Lisi();

	void update(std::string context){
		printf("Lisi observe HanFeizi activity,begin to report to king Qing!\n");
		this->reportToQin(context);
		printf("Lisi finished report!\n");
	}
};

