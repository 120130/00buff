#include "field.h"

Field::Field()
{
	Ship * shipOnFied = nullptr;
	bool alreadyShotAt = false;
}


Field::Field(bool alreadyShotAt_, Ship * shipOnField_)
{
		Ship * shipOnField = shipOnField_;
		bool alreadyShotAt = alreadyShotAt_;
}

Field::~Field()
{
}

Ship * Field::checkField()
{
	return shipOnField;
}

