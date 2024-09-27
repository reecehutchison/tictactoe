//
//  main.cpp
//  tictactoe
//
//  Created by Reece Hutchison on 2024-09-27.
//

#include <iostream>
#include <vector>

using namespace std;

void print_board(vector<vector<int>> board);
void print_line();

int main(int argc, const char * argv[]) {
  
    cout << "     --- Tic Tac Toe ---" << endl << endl;
    
    vector<vector<int>> board{ {0,0,0},
                               {0,0,0},
                               {0,0,0}};
    
    
    return 0;
}


void print_board(vector<vector<int>> board) {
    
}

void print_line() {
    cout << "---|---|---" << endl;
}

/*
 this is what the board should look like:
 
  o |   | o
 ---|---|---
    | x |
 ---|---|---
    |   | x
 
 */
