#include <iostream>
#include <limits>
#include "game.h"
#include "ship.h"
#include <cstdlib> // for system call
using namespace std;

void Game::start( ) {

		int nMasts = 20;
		int nHits = 0;	
		bool impactConfirmed = false;
		bool keepShooting = true;
		bool done = false;
		
        //system("clear"); // linux clear screen
        //system("CLS");
        // Draw board on screen
        shipsBoard.draw();

		while (!done) {
			int selection = displayMenu();
			switch (selection) {
			case 1:
				keepShooting = true; // reset flag
				while (keepShooting) {

                //system("clear");
                //system("CLS");
                shipsBoard.draw();
				
				//if shots were fired show the effect 
				if (nHits > 0)	{
                (impactConfirmed) ? cout << "\n------>>>HIT<<<-------\n" : cout << "\n------<<<MISS>>>------\n";
				}

				keepShooting = anotherShot();
				
				
				impactConfirmed = shipsBoard.shoot(xShoot, yShoot);  
				if (impactConfirmed) {
						nHits++;
				}
				if (nHits >= nMasts) keepShooting = false;  
				}

               // system("clear");
                //system("CLS");
                shipsBoard.draw();
				cout << "THEY R ALL D33D ]:>";
				

				break;
			
			case 2:
			shipsBoard.draw();

			case 0:
				done = true;
				break;

			default:
				cerr << "Unknown command." << endl;

			}
		}
}

int Game::displayMenu()
{
		int selection;
		cout << endl;
		cout << "<< Battleships >>" << endl;
		cout << "-----------------" << endl;
		cout << "1) Play" << endl;
		cout << "2) Reset Board" << endl;
		cout << "0) Quit" << endl;
		cout << endl;

		do {
		cout << "--->";
		
		while(!(cin >> selection)){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		cout << "Input must be in range 0-1\n";		
		cout << "--->";
		};
		} while (selection < 0 || selection > 1);

		return selection;
}

bool Game::anotherShot()
{	
        cout << "\n >>> Load the cannon !!! - prezz 0 to forfeit <<<\n" << endl;
		do {
		cout << "X direction: ";
		
		while(!(cin >> xShoot)){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		cout << "Input must be in range 1-10\n";		
		cout << "X direction: ";
		};
		if (xShoot == 0) return false;	// decided to forfeit 
		} while (xShoot < 0 || xShoot > 10);

		do {
		cout << "Y direction: ";
		
		while(!(cin >> yShoot)){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		cout << "Input must be in range 1-10\n";		
		cout << "Y direction: ";
		};
		if (yShoot == 0) return false;	// decided to forfeit
		} while (xShoot < 0 || xShoot > 10);

		return true;
} 
Game::Game() {}

Game::~Game() {}

