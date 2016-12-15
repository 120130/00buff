#include "interface.h"
using std::cout;

Interface::Interface() : Board() 
{
}

void Interface::showBoard(Board boardToShow) 
{	
for (int i=0; i < BOARD_SIZE; i++) {
	for (int j=0; j < BOARD_SIZE; j++) {
		if (fields[i][j]->shipOnField == nullptr)
		{
			cout << waterMark;
		}
		else if ( fields[i][j]->shipOnField != nullptr && 
				fields[i][j]-> alreadyShotAt == false)
		{
			cout << shipMark;
		}
		else if ( fields[i][j]->shipOnField != nullptr && 
				fields[i][j]-> alreadyShotAt == true)
		{
			cout << missedShotMark;
		}
		else if ( fields[i][j]->shipOnField != nullptr && 
				fields[i][j]-> alreadyShotAt == true &&
				fields[i][j]-> sunkenShip == false)
		{
			cout << shipOnFireMark;
		}
		else if ( fields[i][j]->shipOnField != nullptr && 
				fields[i][j]-> alreadyShotAt == true &&
			   	fields[i][j]-> alreadyShotAt == true )
		{
			cout << sunkenShipMark;
		}
		else 
		{
			//throw Exception
			cout << "ERROR";
		}
	}
}
};
