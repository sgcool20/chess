//
// Created by Suyash Garg on 22/09/21.
//

#include "queen.h"
#include "iostream"

Queen::Queen(bool white): Piece(white) {}

bool Queen::canMove(int startRow, int startCol, int endRow, int endCol) {
    return true;
}

string Queen::printPiece(){
    return "QUEN";
}