//
// Created by Suyash Garg on 22/09/21.
//

#ifndef CHESS_PIECE_H
#define CHESS_PIECE_H

#include "iostream"
using namespace std;

class Piece {
    bool killed,white;
public:
    Piece(bool white);
    bool isWhite();
    bool isKilled();
    void setKilled();
    virtual string printPiece() = 0;
    virtual bool canMove(int startRow, int startCol, int endRow, int endCol) = 0;
};


#endif //CHESS_PIECE_H
