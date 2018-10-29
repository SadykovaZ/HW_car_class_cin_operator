#include "engine_.h"
engine_::engine_(double volume, int countCylinder, string type)
{
	setVolume(volume);
	setCountCylinder(countCylinder);
	setType(type);
}
void engine_::setVolume(double volume)
{
	if (volume < 1) 
		volume = 1.8;
	this->volume = volume;
}
void engine_::setCountCylinder(int countCylinder)
{
	if (countCylinder < 4)
		countCylinder = 4;
	this->countCylinder = countCylinder;
}
void engine_::setType(string type)
{
	this->type= type;
}
double engine_::getVolume() const
{
	return this->volume;
}
int engine_::getCountCylinder() const
{
	return this->countCylinder;
}
string engine_::getType() const
{
	return this->type;
}
string engine_::getInfo() const
{
	string res = "Engine volume = ";
	res += to_string(this->volume);
	res+="\ncount of cylinders = " + to_string(this->countCylinder);
	//res.operator+=(operator+("\ncount of cylinders = ", to_string(this->countCylinder)));
	res += "\nengine type = " + type;
	return res;
}

ostream & operator<<(ostream & os, const engine_ & obj)
{
	os << obj.getInfo();
	return os;
}
