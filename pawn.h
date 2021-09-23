//
// Created by Suyash Garg on 22/09/21.
//

#ifndef CHESS_PAWN_H
#define CHESS_PAWN_H

#include "piece.h"

class Pawn: public Piece {
public:
    Pawn(bool white);
    string printPiece();
    bool canMove(int startRow, int startCol, int endRow, int endCol);
};


#endif //CHESS_PAWN_H
