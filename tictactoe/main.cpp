//
//  main.cpp
//  tictactoe
//
//  Created by Reece Hutchison on 2024-09-27.
//

#include <iostream>
#include <vector>
#include <string>

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
string get_input(int turn);
void update_board(vector<vector<int>>& board, string location, int turn);
void print_header();
bool valid_location(string location);
bool check_valid(vector<vector<int>> board, string location);
// to do
int check_win(vector<vector<int>> board);


int main(int argc, const char * argv[]) {
    
    vector<vector<int>> board{ {0, 0, 0},
                               {0, 0, 0},
                               {0, 0, 0}};
    
    int turn=1;
    cout << endl << endl;
    
    while(turn<10) {
        
        string location;
        
        print_header();
        print_board(board);
        location=get_input(turn);
        if(valid_location(location)) {
            
            if(check_valid(board, location)) {
                
                update_board(board, location, turn);
                ++turn;
                cout << endl << endl;
                
            } else
                cout << "Enter a valid move!" << endl << endl;
        } else
            cout << "Enter a valid move!" << endl << endl;
        
        // check_win;
    }
    
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
    cout << endl << endl;
    
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

string get_input(int turn) {
    int player;
    string location;
    
    if(turn%2==0)
        player=2;
    else
        player=1;
    
    cout << "Player " << player << " turn : ";
    cin >> location;
    cout << endl;
    
    return location;
}

void update_board(vector<vector<int>>& board, string location, int turn) {
    int player;
    int num;
    if(turn%2==0)
        player=2;
    else
        player=1;
    if(player==1)
        num=1;
    else
        num=-1;
    if(location=="a1")
        board[0][0]=num;
    else if(location=="a2")
        board[0][1]=num;
    else if(location=="a3")
        board[0][2]=num;
    else if(location=="b1")
        board[1][0]=num;
    else if(location=="b2")
        board[1][1]=num;
    else if(location=="b3")
        board[1][2]=num;
    else if(location=="c1")
        board[2][0]=num;
    else if(location=="c2")
        board[2][1]=num;
    else if(location=="c3")
        board[2][2]=num;
}

void print_header() {
    cout << "     --- Tic Tac Toe ---" << endl << endl;
}

bool valid_location(string location) {
    if(location=="a1")
        return true;
    else if(location=="a2")
        return true;
    else if(location=="a3")
        return true;
    else if(location=="b1")
        return true;
    else if(location=="b2")
        return true;
    else if(location=="b3")
        return true;
    else if(location=="c1")
        return true;
    else if(location=="c2")
        return true;
    else if(location=="c3")
        return true;
    else
        return false;
}

bool check_valid(vector<vector<int>> board, string location) {
    int x, y;
    if(location=="a1") {
        x=0;
        y=0;
    }
    else if(location=="a2") {
        x=0;
        y=1;
    }
    else if(location=="a3") {
        x=0;
        y=2;
    }
    else if(location=="b1") {
        x=1;
        y=0;
    }
    else if(location=="b2") {
        x=1;
        y=1;
    }
    else if(location=="b3") {
        x=1;
        y=2;
    }
    else if(location=="c1") {
        x=0;
        y=2;
    }
    else if(location=="c2") {
        x=1;
        y=2;
    }
    else {
        x=2;
        y=2;
    }
    if(board[x][y]==1)
        return false;
    else if(board[x][y]==-1)
        return false;
    else
        return true;
}
