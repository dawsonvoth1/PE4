#ifndef TICTAC
#define TICTAC
#include <iostream>
#include <vector>
#include <string>

/*
Dawson Voth
This file intailizes the position and board classes.
*/

struct position{
    int row;
    int col;
    std::string value;
};

class Board{
    public:
        Board();
        void CreateBoard();
        void DisplayBoard();
        std::vector<std::vector<position*>> get_board(){return board_;}
        void GetPLayerChoice();
        void PlaceMaker(position* pos);
    private:
        std::vector<std::vector<position*>> board_={};
};

#endif //TICTAC