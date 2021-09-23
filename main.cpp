#include <iostream>
#include "game.h"

int main() {
    Game game;
    while(!game.isEnd()){
        cout<<"*******************************************"<<endl;
        game.printBoard();
        cout<<"*******************************************"<<endl;
        cout<<"Do you want to resign: ";
        bool resigned;
        cin>>resigned;
        if(resigned){
            game.resign();
            continue;
        }
        if(game.isCurrentWhite())
            cout<<"White Turn"<<endl;
        else
            cout<<"Black Turn"<<endl;
        int startRow,startCol,endRow,endCol;
        cout<<"Enter startRow startCol endRow endCol: ";
        cin>>startRow>>startCol>>endRow>>endCol;
        bool isMoved=game.makeMove(game.isCurrentWhite(), startRow,startCol,endRow,endCol);
        if(!isMoved){
            cout<<"Invalid move. Please try again"<<endl;
        }
    }
    cout<<"Final Status: "<<game.getStatus()<<endl;
    return 0;
}
