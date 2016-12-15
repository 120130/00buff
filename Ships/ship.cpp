#include "ship.h"
#include <math.h>
#include <iostream>
#include <stdlib.h>

Ship::Ship(unsigned int nMasts)
{
        _nMasts = nMasts;
/*
        // initialize random
        srand (time(NULL));

        for (unsigned int i = 0; i < _nMasts; i++) {

        // generate rand number 1-10
           _mastPositionX = rand() % 10+1;
           _mastPositionY = rand() % 10+1;

          cout << " X " << _mastPositionX;
          cout << " Y " << _mastPositionY;
/some bullshit
          }
*/

}

Ship::~Ship()
{

}

