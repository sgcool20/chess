//
// Created by Suyash Garg on 22/09/21.
//

#ifndef CHESS_KNIGHT_H
#define CHESS_KNIGHT_H

#include "piece.h"

class Knight: public Piece {
public:
    Knight(bool white);
    string printPiece();
    bool canMove(int startRow, int startCol, int endRow, int endCol);
};


#endif //CHESS_KNIGHT_H
