//
// Created by Suyash Garg on 22/09/21.
//

#include "pawn.h"
#include "iostream"

Pawn::Pawn(bool white): Piece(white) {}

bool Pawn::canMove(int startRow, int startCol, int endRow, int endCol) {
    return true;
}

string Pawn::printPiece(){
    return "PAWN";
}
