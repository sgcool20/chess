//
// Created by Suyash Garg on 22/09/21.
//

#include "bishop.h"
#include "iostream"

Bishop::Bishop(bool white): Piece(white) {}

bool Bishop::canMove(int startRow, int startCol, int endRow, int endCol) {
    return true;
}

string Bishop::printPiece(){
    return "BSHP";
}
