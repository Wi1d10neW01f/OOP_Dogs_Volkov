#pragma once
#include "dog.h"
ref class WatchDog :public dog
{
public:
	WatchDog() {};
	virtual void eat() override {
			hungry += 15;
			if (hungry > 100) {
				hungry = 100;
				eating = 0;
			}
	}
	virtual void checkUnknown(bool unknown, bool grandmaster, int hungry) override {
		if (unknown) {
			agressive += 50;
		}
		if (grandmaster)
			agressive -= 40;
		if (hungry <= 75)
			agressive += 20;
		if (hungry <= 50)
			agressive += 45;
		if (hungry <= 25)
			agressive += 70;
		if (hungry == 0)
			agressive = 100;
		if (agressive > 100)
			agressive = 100;
	}
	virtual void changeVolume(int agressive) override  {
		if (agressive > 60) {
			volume = 3;
		}
		else if (agressive < 25) {
			volume = 1;
		}
		else
			volume = 2;
	}
	virtual bool changeHungry(int hungry) override {
		if (hungry < 15) {
			return 1;
		}
		else return 0;
	}

	WatchDog(int agr, bool gm, bool un, bool eat, int vol, int hu);
};

