#pragma once
#include "engine_.h"
#include "wheel.h"

enum colors {
	WHITE,
	BLACK,
	RED,
	GREEN
};

class car
{
	engine_ engine;
	wheel wheels[4];
	string model;
	colors color;
	int year;
public:
	car(string model="Honda", colors c=colors::WHITE, int year=2002, double engineVolume=1.8, int engineCountCylinder=4, string engineType="gas", double wheelDiameter = 14, string wheelType = "summer");
	//setters
	void setModel(string CarModel);
	void setColor(colors c);
	void setYear(int CarYear);
	void setEngine(engine_& engine);
	void setWheel(wheel& wheel, int index);
	//getters
	string getModel()const;
	colors getColor()const;
	int getYear()const;
	engine_ getEngine()const;
	engine_& getEngine();
	wheel getWheel(int index)const;
	wheel& getWheel(int index);
	string getCarInfo()const;
};
ostream & operator<<(ostream & os, const car & obj);
istream & operator>>(istream & is, car & obj);
