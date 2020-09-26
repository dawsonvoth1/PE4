#include "TicTacToe.h"

/*
Dawson Voth
This file impements the Board class I made.
*/

//constructor
Board::Board(){
    board_={};
}

//makes empty 2D vector of tic tac toe board
void Board::CreateBoard(){
    std::vector<std::vector<position*>> board={};
    for(int i=0; i<3; i++){
        std::vector<position*> temp={};
        for(int j=0; j<3; j++){
            position* var=new position;
            var->row=i;
            var->col=j;
            var->value=" ⬜️ ";
            temp.push_back(var);
        }
        board.push_back(temp);
    }
    board_=board;
}

//displays 2D vector
void Board::DisplayBoard(){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            std::cout<<board_[i][j]->value;
        }
        std::cout<<std::endl;
    }
}

//gets players position and if they are a O or X
void Board::GetPLayerChoice(){
    position* pos=new position;
    std::cout<<"Enter Row: ";
    bool good_input=false;
    while(!good_input){
        int row;
        std::cin>>row;
        if(row>0 && row<4){
            pos->row=row-1;
            good_input=true;
        }
        else{
            std::cout<<"Please enter a 1,2, or 3: ";
        }
    }
    std::cout<<"Enter Column: ";
    good_input=false;
    while(!good_input){
        int col;
        std::cin>>col;
        if(col>0 && col<4){
            pos->col=col-1;
            good_input=true;
        }
        else{
            std::cout<<"Please enter a 1,2, or 3: ";
        }
    }
    std::cout<<"Enter 'O' or 'X': ";
    good_input=false;
    while(!good_input){
        std::string val;
        getline(std::cin, val);
        if(val=="X"){
            pos->value=" ❌ ";
            good_input=true;
            PlaceMaker(pos);
        }
        else if(val=="O"){
            pos->value=" ⭕️ ";
            good_input=true;
            PlaceMaker(pos);
        }
        else{
            std::cout<<"Please enter a capital letter 'O' or 'X': ";
        }
    }
}

//inserts players choice to the game board
void Board::PlaceMaker(position* pos){
    board_[pos->row][pos->col]->value=pos->value;
    
}
