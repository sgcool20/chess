//
// Created by Suyash Garg on 22/09/21.
//

#include "knight.h"
#include "iostream"

Knight::Knight(bool white): Piece(white) {}

bool Knight::canMove(int startRow, int startCol, int endRow, int endCol) {
    return true;
}

string Knight::printPiece(){
    return "BSHP";
}
