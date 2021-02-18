#include "board.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
#pragma once

class Interface
{
public:
	void addBoard(BoardState _board[BOARD_SIZE][BOARD_SIZE], int P);
	void print(int player);
	void addState(int x, int y, bool ship, bool hit, int player) {
		if (player == 1)
		{
			_boardp1[x][y].hit = hit;
			_boardp1[x][y].ship = ship;
		}
		else
		{
			_boardp2[x][y].hit = hit;
			_boardp2[x][y].ship = ship;
		}
	}
private:
	BoardState _boardp1[BOARD_SIZE][BOARD_SIZE];
	BoardState _boardp2[BOARD_SIZE][BOARD_SIZE];
};

