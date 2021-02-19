//main.cpp



#include "Interface.h"
#include "Placer.h"
#include "Picker.h"

int main()
{
    int remainingBoats = 17;
    Interface Battleship;
    Placer(Battleship, 1);
    Placer(Battleship, 2);
    system("CLS");
    Battleship.print(1);
    while (remainingBoats > 0) {
        Battleship.print(1);
        //ask user to pick a location on the board
        Picker(Battleship, 1, remainingBoats);
        
        system("CLS");
    }
    return 0;
}