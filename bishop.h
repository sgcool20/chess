//
// Created by Suyash Garg on 22/09/21.
//

#ifndef CHESS_BISHOP_H
#define CHESS_BISHOP_H

#include "piece.h"

using namespace std;

class Bishop: public Piece{
public:
    Bishop(bool white);
    string printPiece();
    bool canMove(int startRow, int startCol, int endRow, int endCol);
};


#endif //CHESS_BISHOP_H
