#include "Spot.h"
#include <iostream>
using namespace std;

string Spot::getSpot()
{
	if (isOpen)
		return " ";
	else
		return "X";
}
bool Spot::isSpotOpen()
{
	return isOpen;
}

Spot::Spot(bool open)
{
	isOpen = open;
}

Spot::Spot()
{
}


Spot::~Spot()
{
}