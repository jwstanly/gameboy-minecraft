#ifndef MAIN_H
#define MAIN_H

#include "gba.h"

// TODO: Create any necessary structs

/*
* For example, for a Snake game, one could be:
*
* struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* };
*
* Example of a struct to hold state machine data:
*
* struct state {
*   int currentState;
*   int nextState;
* };
*
*/

enum gba_state {
  START,
  BUILD,
  PLAY,
  WIN,
};

struct player {
  int row;
  int col;
  int rd;
  int cd;
  int jump;
};

struct diamond {
  int row;
  int col;
  int rd;
  int cd;
};

struct game_state {
  enum gba_state gba_state;
  int succeed;
  struct player player;
  struct diamond diamond;
  int ticks;
  int winTick;
};

#endif
