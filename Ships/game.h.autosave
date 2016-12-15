#ifndef GAME_H
#define GAME_H

#include "board.h"

enum Status {
        STATUS_HIT,
        STATUS_MISS,
        STATUS_SUNKED,
        STATUS_FOG
};

class Game {
private:
  char hitMark;
  char missMark;
  char sunkedMark;
  char fogMark;

public:
  int xShoot, yShoot;
  void start();
  int displayMenu();
  bool anotherShot();
  Game();
  ~Game();
};

#endif // GAME_H
