#pragma once
ref class dog
{
public: int agressive, volume, hungry;
public: bool grandmaster, unknown, eating;
public:
	dog() {};
	
	property int Agressive {
		int get() {
			return agressive;
		}
		void set(int a) {
			agressive = a;
		}
	}
	property bool Grandmaster {
		bool get() { return grandmaster; }
		void set(bool a) { grandmaster = a; }
	}
	property bool Unknown {
		bool get() { return unknown; }
		void set(bool a) { unknown = a; }
	}
	property bool Eating {
		bool get() { return eating; }
		void set(bool a) { eating = a; }
	}
	property int Volume {
		int get() { return volume; }
		void set(int a) { volume = a; }
	}
	property int Hungry {
		int get() { return hungry; }
		void set(int a) { hungry = a; }
	}

	dog(int agr, bool gm, bool un, bool eat, int vol, int hu);

	virtual bool checkHungry(int hungry) {
		if (hungry == 0) {
			return 1;
		}
		else return 0;
	}
	virtual void eat(bool eating) {
		while (hungry != 100) {
			hungry += 10;
			if (hungry > 100)
				hungry = 100;
		}
		eating = 0;
	}
	virtual void checkUnknown(bool unknown, bool grandmaster, int hungry) {
		if (unknown) {
			agressive += 25;
		}
		if (grandmaster)
			agressive -= 10;
		if (hungry <= 75)
			agressive += 10;
		if (hungry <= 50)
			agressive += 15;
		if (hungry <= 25)
			agressive += 50;
		if (hungry == 0)
			agressive = 100;
		if (agressive > 100)
			agressive = 100;
		}
	virtual void changeVolume(int agressive) {
		if (agressive > 66) {
			volume = 3;
		}
		else if (agressive < 34) {
			volume = 1;
		}
		else
			volume = 2;
	}
	virtual void GrandSpawn() {
		if (grandmaster) {
			agressive -= 35;
		}
	}
};