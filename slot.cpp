//
// Created by Suyash Garg on 22/09/21.
//

#include "slot.h"

Slot::Slot(int x, int y) {
    this->x = x;
    this->y=y;
    this->p=NULL;
}

Piece* Slot::getPiece() {
    return this->p;
}

void Slot::setPiece(Piece *p) {
    this->p=p;
}