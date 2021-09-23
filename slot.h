//
// Created by Suyash Garg on 22/09/21.
//

#ifndef CHESS_SLOT_H
#define CHESS_SLOT_H

#include "piece.h"

class Slot {
    int x,y;
    Piece *p;
public:
    Slot(int x, int y);
    Piece* getPiece();
    void setPiece(Piece *p);
};


#endif //CHESS_SLOT_H
