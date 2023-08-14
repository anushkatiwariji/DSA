#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isSafe(int row, int col, vector<string> &board, int n){
    int i = row;
    int j = col;
    //for upper-left-diagonal  
    while(i >= 0 && j >= 0){
        if(board[i][j] == 'Q'){
            return false;
        }
        i--; j--;
    }

    i = row;
    j = col;
    //in straight left direction
    while(j >= 0){
        if(board[i][j] == 'Q')
        return false;
        j--;
    }

    i = row;
    j = col;
    //for lower-left-diagonal
    while(i < n && j >= 0){
        if(board[i][j] == 'Q'){
            return false;
        }
        i++; j--;
    }

    return true;
}

void solve(int col, vector<string> &board, vector<vector<string>> &ans, int n){
    if(col == n){
        ans.push_back(board);
        return;
    }
    for(int row = 0; row < n; row++){
        if(isSafe(row, col, board, n)){
            board[row][col] = 'Q';
            solve(col+1, board, ans, n);
            board[row][col] = '.';
        }
    }
}

vector<vector<string>> solveNQueens(int n){
    vector<vector<string>> ans;
    vector<string> board(n);
    string s(n, '.');
    for(int i = 0; i<n; i++){
        board[i] = s;
    }
    solve(0, board, ans, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
           cout << board[i][j];
        cout<<endl;
    }
    return ans;
}

int main(){
    int n = 4;
    solveNQueens(n);
    return 0;
}