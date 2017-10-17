#include "Board.h"
using namespace std;

void Board::displayBoard()
{
	cout << "Welcome to the Percolation Assignment" << endl;

	for (int row = 0; row < board_size; row++)
	{

		for (int col = 0; col < board_size; col++)
		{
			if (grid[col][row] != nullptr)
			{
				cout << "|" << grid[col][row]->isSpotOpen() << "|";
			}
			else
			{
				cout << "  |";
			}
		}
		cout << endl << endl;
	}
	cout << "    ";
}

Board::Board()
{
	for (int y = 0; y < board_size; y++)
	{
		for (int x = 0; x < board_size; x++)
		{
			grid[y][x] = nullptr;
		}
	}


}


Board::~Board()
{
}