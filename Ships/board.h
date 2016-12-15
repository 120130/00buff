#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#include "ship.h"
#include "field.h"


constexpr int BOARD_SIZE = 10; // Over one digit causes board to shift

class Board
{
public:
    Field * fields[BOARD_SIZE][BOARD_SIZE];

	void addShipOnBoard(int shipPositionX, int shipPositionY, Ship * shipAdded);

    Board();
    ~Board();

};

#endif // BOARD_H
