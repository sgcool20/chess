//
// Created by Suyash Garg on 22/09/21.
//

#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H

#include "slot.h"
#include "vector"

using namespace std;


class Board {
    vector<vector<Slot*>> board;
public:
    Board();
    vector<vector<Slot*>> getBoard();
    Slot* getSlot(int row, int col);
    void resetBoard();
};


#endif //CHESS_BOARD_H
