#include "board.h"

// --- --- Board Class --- ---

Board::Board()
{
	for (int x = 0; x < BOARD_SIZE; x++)
	{
		for (int y = 0; y < BOARD_SIZE; y++)
		{
			__board[x][y] = BoardState(x, y);
		}
	}
}

void Board::addState(int x, int y, bool ship, bool state)
{
	__board[x][y].ship = ship;
	__board[x][y].hit = state;
}

int Board::getShipState(int x, int y)
{
	return __board[x][y].ship;
}

int Board::getHitState(int x, int y)
{
	return __board[x][y].hit;
}

void Board::update()
{
	for (int x = 0; x < BOARD_SIZE; x++)
	{
		for (int y = 0; y < BOARD_SIZE; y++)
		{
			__board[x][y] = BoardState(x, y);
		}
	}
}

BoardState Board::getBoard()
{
	return __board[BOARD_SIZE][BOARD_SIZE];
}
