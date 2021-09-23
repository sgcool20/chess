//
// Created by Suyash Garg on 22/09/21.
//

#include "piece.h"

Piece::Piece(bool white){
    this->killed=false;
    this->white=white;
}

bool Piece::isKilled() {
    return this->killed;
}

bool Piece::isWhite() {
    return this->white;
}

void Piece::setKilled() {
    this->killed=true;
}