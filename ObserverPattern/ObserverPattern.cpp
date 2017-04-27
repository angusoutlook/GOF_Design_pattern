// ObserverPattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <vector>
#include "HanFeizi.h"
#include "IObservable.h"
#include "IObserver.h"
#include "Wangsi.h"
#include "Lisi.h"



int _tmain(int argc, _TCHAR* argv[])
{
	IObserver* lisi = new Lisi();
	IObserver* wangsi = new Wangsi();

	HanFeizi* hanfeizi = new HanFeizi();

	hanfeizi->addObserver(lisi);
	hanfeizi->addObserver(wangsi);

	hanfeizi->haveBreakfast();

	return 0;
}

