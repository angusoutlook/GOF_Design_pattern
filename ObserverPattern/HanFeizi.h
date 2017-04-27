#pragma once
#include "IHanFeizi.h"
#include "IObservable.h"
#include <vector>


class HanFeizi :
	public IHanFeizi,IObservable
{
private:
	vector<IObserver*> _observerList;
public:
	HanFeizi();
	~HanFeizi();

	void addObserver(IObserver* observer){
		_observerList.push_back(observer);
	}

	void notifyObserver(std::string context){
		vector<IObserver*>::iterator iter = this->_observerList.begin();
		while(iter!=this->_observerList.end())
		{
			((IObserver*)*iter++)->update(context);
		}
	}

	void removeObserver(IObserver* observer){
		vector<IObserver*>::iterator iter = this->_observerList.begin();
		while (iter != this->_observerList.end())
		{
			if (((IObserver*)*iter) == observer){
				this->_observerList.erase(iter);
			}
			else{
				iter++;
			}
		}
	}

	void haveBreakfast(){
		printf("HanFeizi start having breakfast!\n");
		this->notifyObserver("Hanfeizi is eating!\n");
	}

	void haveFun(){
		printf("HanFeizi start Entermenet!\n");
		this->notifyObserver("HanFeizi is fun!\n");
	}



};

