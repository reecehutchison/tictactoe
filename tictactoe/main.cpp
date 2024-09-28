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
void print_pipe();
void print_o();
void print_x();
void print_empty();
void print_space(char ch);
void print_nums();
void print_token(int x, int y, vector<vector<int>> board);

int main(int argc, const char * argv[]) {
  
    cout << "     --- Tic Tac Toe ---" << endl << endl;
    
    // 1 for x
    // -1 for o
    vector<vector<int>> board{ {0, 0, 0},
                               {0, 0, 0},
                               {0, 0, 0}};

    print_board(board);
    
    cout << endl << endl << endl;
    
    return 0;
}


void print_board(vector<vector<int>> board) {
    
    print_nums();
    
    // (0,0)
    print_space('a');
    print_token(0, 0, board);
    print_pipe();
    
    // (0,1)
    print_token(0, 1, board);
    print_pipe();
    
    // (0,2)
    print_token(0, 2, board);
    
    cout << endl;
    print_space(' ');
    print_line();
    
    // (1,0)
    print_space('b');
    print_token(1, 0, board);
    print_pipe();
    
    // (1,1)
    print_token(1, 1, board);
    print_pipe();
    
    // (1,2)
    print_token(1, 2, board);
    
    cout << endl;
    print_space(' ');
    print_line();
    
    // (2,0)
    print_space('c');
    print_token(2, 0, board);
    print_pipe();
    
    // (2,1)
    print_token(2, 1, board);
    print_pipe();
    
    // (2,2)
    print_token(2, 2, board);
    
}

void print_line() {
    cout << "---|---|---" << endl;
}

void print_pipe() {
    cout << "|";
}

void print_o() {
    cout << " o ";
}

void print_x() {
    cout << " x ";
}

void print_empty() {
    cout << "   ";
}

void print_space(char ch) {
    cout << "    ";
    cout << ch;
    cout << "    ";
}

void print_nums() {
    print_space(' ');
    cout << " 1   2   3" << endl << endl;
}

void print_token(int x, int y, vector<vector<int>> board) {
    if(board[x][y]==1)
        print_x();
    else if(board[x][y]==-1)
        print_o();
    else
        print_empty();
}


/*
 this is what the board should look like:
 
     1   2   3
 
a    o |   | o
    ---|---|---
b      | x |
    ---|---|---
c      |   | x
 
 then it will prompt the player to enter a place
 
 */
