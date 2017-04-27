#pragma once
#include <list>
using namespace std;
class Emperor
{
private:
	static const int maxNumOfEmperor = 2;
	static char namelist[maxNumOfEmperor][32];
	static Emperor* emperorList[maxNumOfEmperor];

	Emperor();
	Emperor(int id,char* str){
		if(id>=0&&id<2) strcpy_s(namelist[id],sizeof(namelist[id]),str);
	}
	~Emperor();

public:
	static void InitEmperors(){
		char buf[32];
		for (int i = 0; i < maxNumOfEmperor; i++){
			sprintf_s(buf, sizeof(buf), "King No%d.", i);
			strcpy_s(namelist[i],sizeof(namelist[i]),buf);
			emperorList[i] = new Emperor(i, namelist[i]);
		}
	}
	static Emperor* getInstance(int id){
		if (emperorList[0] == NULL) InitEmperors();
		if (id >= 0 && id < 2) return emperorList[id];
		return NULL;
	}

	static void say(int id){
		if (id >= 0 && id < 2) printf("I'm am %s!\n", namelist[id]);
	}

};

