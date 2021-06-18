#pragma once
#include "dog.h"
ref class DecorDog :
	public dog
{
public:
	const int ragezone = 40;
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
			agressive += 40;
		}
		if (grandmaster)
			agressive -= 50;
		if (hungry == 0)
			agressive = 90;
		else if (hungry <= 25)
			agressive += 50;
		else if (hungry <= 50)
			agressive += 25;
		else if (hungry <= 75)
			agressive += 15;
		if (agressive > 100)
			agressive = 100;
	}
	virtual void changeVolume(int agressive) override{
		if (agressive > 45) {
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

