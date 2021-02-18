//Placer.h
//function that places boats on a board
#pragma once

#include "Interface.h"
#include "board.h"
#include "Settings.h"

#include <iostream>
using std::cin;
using std::cout;


//Currently doesn't check if a boat will be out of bounds
//Can only place vertically
//Asks user for the coordinates of the uppermost segment
//Currently no error handling if user enters a number out of range or a letter
void Placer(Interface &board, int PlayerNum) {
	//int count = SHIP_TOTAL;
	int xcoord, ycoord;
	for (int i = 0; i < SHIP_TOTAL; i++) {
		cout << "Enter x coordinate for ship:";
		cin >> xcoord;
		cout << "\n";
		cout << "Enter y coordinate for ship:";
		cin >> ycoord;
		cout << "\n";
		switch (i) {
		case (0):
			for (int j = 0; j < SHIP_1_SIZE; j++) {
				board.addState(xcoord, ycoord + j, true, false, PlayerNum);
			}
			break;
		case(1):
			for (int j = 0; j < SHIP_2_SIZE; j++) {
				board.addState(xcoord, ycoord + j, true, false, PlayerNum);
			}
			break;
		case(2):
			for (int j = 0; j < SHIP_3_SIZE; j++) {
				board.addState(xcoord, ycoord + j, true, false, PlayerNum);
			}
			break;
		case(3):
			for (int j = 0; j < SHIP_4_SIZE; j++) {
				board.addState(xcoord, ycoord + j, true, false, PlayerNum);
			}
			break;
		case(4):
			for (int j = 0; j < SHIP_5_SIZE; j++) {
				board.addState(xcoord, ycoord+j, true, false, PlayerNum);
			}
			break;
		default:
			board.addState(xcoord, ycoord, true, false, PlayerNum);
			break;
		}
		system("CLS");
		board.print(1);
	}
}