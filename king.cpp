//
// Created by Suyash Garg on 22/09/21.
//

#include "king.h"
#include "iostream"

King::King(bool white): Piece(white) {}

bool King::canMove(int startRow, int startCol, int endRow, int endCol) {
    return true;
}

string King::printPiece(){
    return "KING";
}
