
#ifndef SHIPS_H
#define SHIPS_H

#include <stdbool.h>
#include "game.h"

typedef struct {

    unsigned short id;
    unsigned short size;

    Cell** cells;

    bool isKilled;

} Ship;


void setShips (Cell** field, Ship* ships, char gameMode);

char getSetMode (char gameMode);

bool isEmpty (int* shipsLeft);

void reset (Ship ship);

int* getCoords(char setMode, int* coords);

int calcSize(int* coords);

int calcDist(int x1, int y1, int x2, int y2);

bool contains (Ship ship, int* shipsToSet);

bool isAgreed(void);

void delete (Ship ship, int* shipsToSet);

int* getUserCoords(void);

void setShip (Ship* ship, int* coords, Cell** field);

int* getFullCoords(int coords[4]);

bool checkCoords (int coords[4], Cell** field);

bool validCoords(int coords[4]);

bool checkSize (int coords[4]);

bool checkEnv (int coords[4], Cell** field);

void initShip (Ship* ship, const int id, int* coords);

#endif
