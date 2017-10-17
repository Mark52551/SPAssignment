#pragma once
#pragma once
#include <iostream>
#include <string>
using namespace std;


class Spot
{
protected:
	bool isOpen;
public:
	bool isSpotOpen();
	virtual string getSpot();
	Spot();
	Spot(bool);
	~Spot();
};
