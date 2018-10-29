#pragma once
#include <string>
using namespace std;
class engine_
{
	double volume;
	int countCylinder;
	string type;
public:
	engine_(double volume=1.8, int countCylinder=4, string type="gas");
	void setVolume(double volume);
	void setCountCylinder(int countCylinder);
	void setType(string type);
	double getVolume()const;
	int getCountCylinder()const;
	string getType()const;
	string getInfo()const;
	

	
};

ostream&operator<<(ostream&os, const engine_&obj);

