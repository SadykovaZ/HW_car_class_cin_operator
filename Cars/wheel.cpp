#include "wheel.h"


wheel::wheel(double diameter, string type)
{
	setDiameter(diameter);
	setType(type);
}

void wheel::setDiameter(double diameter)
{
	if (diameter < 13)
		diameter = 14;
	this -> diameter = diameter;
}

void wheel::setType(string type)
{
	this->type = type;
}

double wheel::getDiameter() const
{
	return this->diameter;
}

string wheel::getType() const
{
	return this->type;
}

string wheel::getInfo() const
{
	string res = "Wheel diameter = ";
	res += to_string(this->diameter);
	res += "\nresina type = " + type;
	return res;
}

ostream & operator<<(ostream & os, const wheel & obj)
{
	os << obj.getInfo();
	return os;
}
