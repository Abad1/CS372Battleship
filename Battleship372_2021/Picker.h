//Picker.h

#pragma once

#include "Interface.h"
#include <iostream>

using std::cin;
using std::cout;

//main loop for the game
//asks user to pick coordinates, and lets them know if it's a hit or a miss
//i guess they never miss huh?
void Picker(Interface &board,int PlayerNum, int & remainingBoats) {
	int xcoord, ycoord = 0;
	cout << "Choose X coordinate to hit:";
	cin >> xcoord;
	cout << "Choose Y coordinate to hit:";
	cin >> ycoord;
	if (board.checkForBoat(xcoord, ycoord - 1, PlayerNum)) {
		cout << "Hit!";
		board.addState(xcoord, ycoord, true, true, PlayerNum);
		remainingBoats--;
	}
	else {
		cout << "Miss!";
		board.addState(xcoord, ycoord, false, true, PlayerNum);
	}
}