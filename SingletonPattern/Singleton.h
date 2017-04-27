#pragma once



class Singleton
{
private:
	static Singleton* instance;
	Singleton();
	Singleton(Singleton &);
	Singleton& operator=(const Singleton&);

	~Singleton();
public:
	static Singleton* getInstance(){
		
		if (instance == NULL)	instance = new Singleton();
		
		return instance;
	
	}

	static void doSomething(){
		printf("Singleton doSomething!\n");
	}
};





