#ifndef SHIP_H
#define SHIP_H


class Ship
{
private:
  
  unsigned int _mastPositionX;
  unsigned int _mastPositionY;
  unsigned int _nMasts;
public:

  Ship(unsigned int nMasts);
  ~Ship();
};

#endif // SHIP_H
