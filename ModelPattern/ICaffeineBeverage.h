#pragma once
class ICaffeineBeverage
{
public:
	ICaffeineBeverage();
	virtual ~ICaffeineBeverage();

	virtual void prepareRecipe() final{
		boilWater();
		brew();
		pourInCup();
		addCondiments();
	}

	void boilWater(){
		printf("boilWater!\n");
	}

	void pourInCup()
	{
		printf("pourInCup!\n");
	}

	virtual void brew() = 0;
	virtual void addCondiments() = 0;

	bool customWantsCondiments(){
		return true;
	}
};

