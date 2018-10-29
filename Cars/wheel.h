#pragma once
#include<string>
using namespace std;
class wheel
{
	double diameter;
	string type;
public:
	wheel(double diameter = 14, string type = "summer");
	void setDiameter(double diameter);
	void setType(string type);
	double getDiameter() const;
	string getType() const;
	string getInfo() const;
};
ostream & operator<<(ostream & os, const wheel & obj);

