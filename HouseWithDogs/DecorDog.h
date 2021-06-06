#pragma once
#include "dog.h"
ref class DecorDog :
	public dog
{
public:
	DecorDog() {};
	virtual void eat() override {
		hungry += 30;
		if (hungry > 100) {
			hungry = 100;
			eating = 0;
		}
	}
	virtual void checkUnknown(bool unknown, bool grandmaster, int hungry) override {
		if (unknown) {
			agressive += 100;
		}
		if (grandmaster)
			agressive -= 10;
		if (hungry <= 75)
			agressive += 40;
		if (hungry <= 50)
			agressive += 55;
		if (hungry <= 25)
			agressive += 100;
		if (hungry == 0)
			agressive = 100;
		if (agressive > 100)
			agressive = 100;
	}
	virtual void changeVolume(int agressive) override{
		if (agressive > 10) {
			volume = 3;
		}
		else
			volume = 2;
	}
	virtual bool changeHungry(int hungry) override {
		if (hungry < 40) {
			return 1;
		}
		else return 0;
	}
	
	DecorDog(int agr, bool gm, bool un, bool eat, int vol, int hu);
};

