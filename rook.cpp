//
// Created by Suyash Garg on 22/09/21.
//

#include "rook.h"
#include "iostream"

Rook::Rook(bool white): Piece(white) {}

bool Rook::canMove(int startRow, int startCol, int endRow, int endCol) {
    return true;
}

string Rook::printPiece(){
    return "ROOK";
}