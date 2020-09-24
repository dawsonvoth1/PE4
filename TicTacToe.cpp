#include <iostream>
#include <vector>
//#include <string>

struct position{
    int row;
    int col;
    std::string value;
};

void CreateBoard(){
    std::vector<std::vector<position*>> board;
    for(int i=0; i<3; i++){
        std::vector<position*> temp={};
        for(int j=0; j<3; j++){
            position* var=new position;
            var->row=i;
            var->col=j;
            var->value="#";
            temp.push_back(var);
        }
        board.push_back(temp);
    }
}

int main(){
    std::cout<<"hi";
    return 0;
}