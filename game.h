//
// Created by Suyash Garg on 23/09/21.
//

#ifndef CHESS_GAME_H
#define CHESS_GAME_H

#include "player.h"
#include "board.h"

enum GameStatus {
    BLACK_WIN,
    WHITE_WIN,
    ACTIVE,
    FORFEIT, // player absent or timed out.
    STALEMATE, // player has no moves and their king is not in check. this will be a draw.
    RESIGNATION // draw when both player agree.
};

class Game {
    Player *whitePlayer,*blackPlayer,*currentPlayer;
    Board *board;
    GameStatus status;
public:
    Game();
    bool isEnd();
    GameStatus getStatus();
    void setStatus(GameStatus status);
    bool makeMove(bool white, int startRow, int startCol, int endRow, int endCol);
    void resign();
    void printBoard();
    bool isCurrentWhite();
};


#endif //CHESS_GAME_H
