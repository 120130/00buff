#ifndef FIELD_H_ 
#define FIELD_H_ 
#include "ship.h"

class Field
{
public:
	bool alreadyShotAt;
	bool sunkenShip;
	Ship * shipOnField; 
	Ship * checkField();

	Field();
	Field(bool alreadyShotAt_, Ship * shipOnField_);
	~Field();
};


#endif
