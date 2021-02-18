//Interface.cpp

#include "Interface.h"

void Interface::addBoard(BoardState _board[BOARD_SIZE][BOARD_SIZE], int PlayerNum)
{
	if (PlayerNum == 1)
	{
		_boardp1[BOARD_SIZE][BOARD_SIZE] = _board[BOARD_SIZE][BOARD_SIZE];
	}
	else
	{
		_boardp2[BOARD_SIZE][BOARD_SIZE] = _board[BOARD_SIZE][BOARD_SIZE];
	}
}




// Currently Broken for anything besides a Board size of 10
void Interface::print(int player)
{
	//Adjusting for BOARD_SIZE
	std::string _temp;
	_temp += "|      ";
	for (int i = 0; i < BOARD_SIZE; i++)
	{
		_temp += std::to_string(i+1) + "  ";
	}
	_temp += "    |";
	
	//--------------------------------------------------------------------------------------------------

	//Top Board Top Border
	int len = _temp.length();
	cout << " ";
	for (int i = 0; i < len; i++)
	{
		cout << "-";
	}
	cout << endl;

	//Numerical X-Axis Top Board Border
	cout << " |      ";
	for (int i = 0; i < BOARD_SIZE; i++)
	{
		cout << i+1 << " ";
		for (int j = 1; j < std::to_string(BOARD_SIZE).length(); j++)
			cout << " ";
	}
	cout << "    |" << endl;

	_temp = "";
	//Top Numerical Y-Axis Boarder, including side borders and Board itself
	for (int y = 0; y < BOARD_SIZE; y++)
	{
		cout << " |"; //5 Spaces for 1 digit
		_temp = std::to_string(y+1);
		for (int i = 5; i > _temp.length(); i--)
		{
			cout << " ";
		}
		cout << y + 1 << ' ';
		for (int x = 0; x < BOARD_SIZE; x++)
		{
			if (player == 1)
			{
				if (_boardp2[x][y].hit == true && _boardp2[x][y].ship == true)
					cout << HIT_SHIP << " ";
				else if (_boardp2[x][y].hit == true)
					cout << HIT_SPACE << " ";
				else if (_boardp2[x][y].ship == true)
					cout << SHIP_SPACE << " ";
				else
					cout << BLANK_SPACE << " ";
			}
			else
			{
				if (_boardp1[x][y].hit == true && _boardp1[x][y].ship == true)
					cout << HIT_SHIP << " ";
				else if (_boardp1[x][y].hit == true)
					cout << HIT_SPACE << " ";
				else if (_boardp1[x][y].ship == true)
					cout << SHIP_SPACE << " ";
				else
					cout << BLANK_SPACE << " ";
			}
			for (int j = 1; j < std::to_string(BOARD_SIZE).length(); j++)
				cout << " ";
		}
		cout << "     |" << endl;
	}

	//Top Board Bottom Border
	cout << " ";
	for (int i = 0; i < len; i++)
	{
		cout << "-";
	}
	cout << endl;

	//--------------------------------------------------------------------------------------------------
	
	// Between Boards Border
	cout << "";
	for (int i = -2; i < len; i++)
	{
		cout << "-";
	}
	cout << endl;

	//--------------------------------------------------------------------------------------------------

	//Bottom Board Top Border
	cout << " ";
	for (int i = 0; i < len; i++)
	{
		cout << "-";
	}
	cout << endl;

	//Numerical X-Axis Bottom Board Border
	cout << " |      ";
	for (int i = 0; i < BOARD_SIZE; i++)
	{
		cout << i + 1 << " ";
		for (int j = 1; j < std::to_string(BOARD_SIZE).length(); j++)
			cout << " ";
	}
	cout << "    |" << endl;

	_temp = "";
	//Bottom Numerical Y-Axis Boarder, including side borders and Board itself
	for (int y = 0; y < BOARD_SIZE; y++)
	{
		cout << " |"; //5 Spaces for 1 digit
		_temp = std::to_string(y + 1);
		for (int i = 5; i > _temp.length(); i--)
		{
			cout << " ";
		}
		cout << y + 1 << ' ';
		for (int x = 0; x < BOARD_SIZE; x++)
		{
			if (player == 2)
			{
				if (_boardp2[x][y].hit == true && _boardp2[x][y].ship == true)
					cout << HIT_SHIP << " ";
				else if (_boardp2[x][y].hit == true)
					cout << HIT_SPACE << " ";
				else if (_boardp2[x][y].ship == true)
					cout << SHIP_SPACE << " ";
				else
					cout << BLANK_SPACE << " ";
			}
			else
			{
				if (_boardp1[x][y].hit == true && _boardp1[x][y].ship == true)
					cout << HIT_SHIP << " ";
				else if (_boardp1[x][y].hit == true)
					cout << HIT_SPACE << " ";
				else if (_boardp1[x][y].ship == true)
					cout << SHIP_SPACE << " ";
				else
					cout << BLANK_SPACE << " ";
			}
			for (int j = 1; j < std::to_string(BOARD_SIZE).length(); j++)
				cout << " ";
		}
		cout << "     |" << endl;
	}

	//Bottom Board Bottom Border
	cout << " ";
	for (int i = 0; i < len; i++)
	{
		cout << "-";
	}
	cout << endl;

	//Symbol Table
	cout << "   Ship Hit = " << HIT_SHIP << "   Shot Miss = " << HIT_SPACE << "   Ship = " << SHIP_SPACE << endl;
}