#include "board.h"
#include "ship.h"

int nHits = 0;
using namespace std;

// c-tor
Board::Board() : fields() {	// note the initialization list
    for (int i=0; i < BOARD_SIZE; i++) {
        for (int j=0; j < BOARD_SIZE; j++) {
            Field * fields[i][j];
        }
    }
}

// d-tor
Board::~Board() {}

void Board::addShipOnBoard(int shipPositionX, int shipPositionY, Ship * shipAdded)
{
	fields[shipPositionX][shipPositionY]->shipOnField = shipAdded;
}

