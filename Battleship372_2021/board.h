#pragma once
#include <vector>

#include "Settings.h"

struct BoardState {
	BoardState() : ship(false), hit(false) {};
	BoardState(bool _ship) : ship(_ship), hit(false) {};
	BoardState(bool _ship, bool _hit) : ship(_ship), hit(_hit) {};
	bool ship;
	bool hit;
};

struct Ship_Piece {
	Ship_Piece() : x(0), y(0), length(0), rotation(0) {};
	Ship_Piece(int len) : x(0), y(0), length(len), rotation(0) {};
	Ship_Piece(int len, int rot) : x(0), y(0), length(len)
	{
		if (rot > 360)
		{
			rotation = rot % 360;
		}
		else if (rot < 0)
		{
			for(rot; rot < 0; rot+=360){}
			rotation = rot;
		}
	};
	Ship_Piece(int _x, int _y, int len) : x(_x), y(_y), length(len), rotation(0) {};
	Ship_Piece(int _x, int _y, int len, int rot) : x(_x), y(_y), length(len) 
	{
		if (rot > 360)
		{
			rotation = rot % 360;
		}
		else if (rot < 0)
		{
			for (rot; rot < 0; rot += 360) {}
			rotation = rot;
		}
	};
	int x;
	int y;
	int length;
	int rotation;
};


class Board
{
public:
	Board();
	void addState(int x, int y, bool ship, bool state);
	int getHitState(int x, int y);
	
	void addShipPieces(int x, int y);
	int getShipState(int x, int y);
	void update();

	BoardState getBoard();

private:
	BoardState __board[BOARD_SIZE][BOARD_SIZE];
	std::vector<Ship_Piece> __ships[SHIP_TOTAL];
};

