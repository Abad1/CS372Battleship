//main.cpp



#include "Interface.h"
#include "Placer.h"

int main()
{
    Interface Battleship;
    Placer(Battleship, 1);
    Placer(Battleship, 2);
    system("CLS");
    Battleship.print(1);
    return 0;
}