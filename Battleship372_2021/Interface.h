//Interface.h

#include "board.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
#pragma once

class Interface
{
public:
	//
	void addBoard(BoardState _board[BOARD_SIZE][BOARD_SIZE], int PlayerNum);

	void print(int player);

	void addState(int x, int y, bool ship, bool hit, int player) {
		if (player == 1)
		{
			_boardp1[x - 1][y - 1].hit = hit;
			_boardp1[x - 1][y - 1].ship = ship;
		}
		else
		{
			_boardp2[x - 1][y - 1].hit = hit;
			_boardp2[x - 1][y - 1].ship = ship;
		}
	}

	bool checkForBoat(int xcoord, int ycoord, int PlayerNum){
		if (PlayerNum == 1) {
			return _boardp1[xcoord - 1][ycoord - 1].ship;
		}
		else {
			return _boardp2[xcoord - 1][ycoord - 1].ship;
		}
	
	};
	
private:
	BoardState _boardp1[BOARD_SIZE][BOARD_SIZE];
	BoardState _boardp2[BOARD_SIZE][BOARD_SIZE];
};

