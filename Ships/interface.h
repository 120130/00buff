#ifndef INTERFACE_H_
#define INTERFACE_H_
#include "field.h"
#include "board.h"

//board show

class Interface {

	Interface();
	~Interface();

	char missedShotMark;
	char waterMark;
	char shipMark;
	char shipOnFireMark;
	char sunkenShipMark;

void showBoard(Board boardToShow);


}

#endif

