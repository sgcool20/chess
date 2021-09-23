//
// Created by Suyash Garg on 22/09/21.
//

#ifndef CHESS_QUEEN_H
#define CHESS_QUEEN_H

#include "piece.h"

class Queen: public Piece {
public:
    Queen(bool white);
    string printPiece();
    bool canMove(int startRow, int startCol, int endRow, int endCol);
};


#endif //CHESS_QUEEN_H
