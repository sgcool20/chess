//
// Created by Suyash Garg on 22/09/21.
//

#ifndef CHESS_ROOK_H
#define CHESS_ROOK_H

#include "piece.h"

class Rook: public Piece {
public:
    Rook(bool white);
    string printPiece();
    bool canMove(int startRow, int startCol, int endRow, int endCol);
};


#endif //CHESS_ROOK_H
