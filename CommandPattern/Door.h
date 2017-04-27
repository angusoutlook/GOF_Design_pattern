#pragma once
class Door
{
public:
	Door();
	~Door();
	void up(){
		printf("Door is up\n");
	}

	void down(){
		printf("Door is down\n");
	}

	void stop(){
		printf("Door is stop\n");
	}

	void lightOn(){
		printf("Door is lightOn\n");
	}

	void lightOff(){
		printf("Door is lightOff\n");
	}
};

