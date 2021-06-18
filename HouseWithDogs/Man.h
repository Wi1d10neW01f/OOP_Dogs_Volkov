#pragma once
ref class Man
{
public: int radius;
public:
	Man() {};

	property int Radius {
		int get() {
			return radius;
		}
		void set(int a) {
			radius = a;
		}
	}

};

