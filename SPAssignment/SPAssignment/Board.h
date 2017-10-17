#pragma once
#include "spot.h"
#include <iostream>
#include <string>
using namespace std;

const int board_size = 20;


class Board
{
public:
	void displayBoard();

	Board();
	~Board();

private:
	Spot * grid[board_size][board_size];

};
