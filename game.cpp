//
// Created by Suyash Garg on 23/09/21.
//

#include "game.h"
#include "iostream"

Game::Game() {
    this->whitePlayer = new Player(true);
    this->blackPlayer = new Player(false);
    this->currentPlayer=whitePlayer;
    this->board = new Board();
    this->status = ACTIVE;
}

bool Game::isEnd() {
    return this->status != ACTIVE;
}

GameStatus Game::getStatus() {
    return this->status;
}

void Game::setStatus(GameStatus status) {
    this->status=status;
}

bool isValidVal(int val){
    return val>=0 && val<8;
}

bool Game::makeMove(bool white, int startRow, int startCol, int endRow, int endCol) {
    if(!isValidVal(startRow) || !isValidVal(startCol) || !isValidVal(endRow) || !isValidVal(endCol)){
        return false;
    }
    if(currentPlayer->isWhite() != white){
        return false;
    }
    Slot *startSlot = this->board->getSlot(startRow, startCol);
    Slot *endSlot = this->board->getSlot(endRow, endCol);
    if(startSlot->getPiece()==NULL){
        return false;
    }
    if(startSlot->getPiece()->isWhite()!=white){
        return false;
    }
    if(endSlot->getPiece()!=NULL && endSlot->getPiece()->isWhite()==white){
        return false;
    }
    if(!startSlot->getPiece()->canMove(startRow,startCol,endRow,endCol)){
        return false;
    }
    if(endSlot->getPiece()!=NULL){
        if(endSlot->getPiece()->printPiece()=="KING"){
            status=white?WHITE_WIN:BLACK_WIN;
        }
        endSlot->getPiece()->setKilled();
    }
    endSlot->setPiece(startSlot->getPiece());
    startSlot->setPiece(NULL);
    currentPlayer = white? blackPlayer:whitePlayer;
    return true;
}

void Game::resign() {
    status = RESIGNATION;
}

void Game::printBoard() {
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            Piece *piece = this->board->getBoard()[i][j]->getPiece();
            string pieceName = piece==NULL?"NULL":piece->printPiece();
            if(piece!=NULL){
                pieceName=piece->isWhite()?"W_"+pieceName:"B_"+pieceName;
            }
            cout<<pieceName<<"\t";
        }
        cout<<endl;
    }
}

bool Game::isCurrentWhite() {
    return currentPlayer->isWhite();
}