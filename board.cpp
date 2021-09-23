//
// Created by Suyash Garg on 22/09/21.
//

#include "board.h"
#include "iostream"
#include "king.h"
#include "pawn.h"
#include "rook.h"
#include "knight.h"
#include "bishop.h"
#include "queen.h"

using namespace std;

Board::Board() {
    for(int i=0;i<8;i++){
        vector<Slot*> temp;
        for(int j=0;j<8;j++){
            temp.push_back(new Slot(i,j));
        }
        this->board.push_back(temp);
    }
    resetBoard();
}

vector<vector<Slot*>> Board::getBoard() {
    return this->board;
}

void Board::resetBoard() {
    //Initialize white pieces
    board[0][0]->setPiece(new Rook(true));
    board[0][1]->setPiece(new Knight(true));
    board[0][2]->setPiece(new Bishop(true));
    board[0][3]->setPiece(new Queen(true));
    board[0][4]->setPiece(new King(true));
    board[0][5]->setPiece(new Bishop(true));
    board[0][6]->setPiece(new Knight(true));
    board[0][7]->setPiece(new Rook(true));

    //Initialize black pieces
    board[7][0]->setPiece(new Rook(false));
    board[7][1]->setPiece(new Knight(false));
    board[7][2]->setPiece(new Bishop(false));
    board[7][3]->setPiece(new Queen(false));
    board[7][4]->setPiece(new King(false));
    board[7][5]->setPiece(new Bishop(false));
    board[7][6]->setPiece(new Knight(false));
    board[7][7]->setPiece(new Rook(false));

    for(int i=0;i<8;i++){
        // initialize white pawns
        board[1][i]->setPiece(new Pawn(true));
        // initialize black pawns
        board[6][i]->setPiece(new Pawn(false));
    }

    // set other pieces to null
    for(int i=2;i<6;i++){
        for(int j=0;j<8;j++){
            board[i][j]->setPiece(NULL);
        }
    }
}

Slot* Board::getSlot(int row, int col) {
    return board[row][col];
}
