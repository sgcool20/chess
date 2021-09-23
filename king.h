//
// Created by Suyash Garg on 22/09/21.
//

#ifndef CHESS_KING_H
#define CHESS_KING_H

#include "piece.h"

class King : public Piece{
public:
    King(bool white);
    string printPiece();
    bool canMove(int startRow, int startCol, int endRow, int endCol);
};


#endif //CHESS_KING_H
