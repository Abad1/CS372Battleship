#include "Interface.h"

int main()
{
    Interface Battleship;
    Battleship.addState(1, 1, true, true, 2);
    Battleship.print(1);
    return 0;
}