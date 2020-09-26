#include "TicTacToe.h"

/*
Dawson Voth
This file impements the Tic Tac Toe game with the Board class.
Runs through all possible 9 turns and asks player is they are a O or X.
*/

int main(){
    std::cout<<"Tic Tac Toe"<<std::endl;
    std::cout<<"To play enter the alterate turns and, enter the row and column you want to play in,"<<std::endl;
    std::cout<<"and then enter either a 'O' or 'X' depending what player you are."<<std::endl;
    std::cout<<"The game will end after 9 turns, make sure you don't play in a spot already used."<<std::endl;
    std::cout<<std::endl;
    Board *b=new Board;
    b->CreateBoard();
    b->DisplayBoard();
    for(int i=0; i<9; i++){
        b->GetPLayerChoice();
        b->DisplayBoard();
    }
    std::cout<<std::endl;
    std::cout<<"GAME OVER";
    delete b;
    return 0;
}
