#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

bool check(vector <string>& board, int r, int c, int n){
    for(int i=0; i<r; i++){
        if(board[i][c] == 'Q'){
            return false;
        }
    }

    int x = r-1, y = c-1;
    while(x >= 0 && y >= 0){
        if(board[x][y] == 'Q'){
            return false;
        } 
        x--, y--;
    }

    x = r-1, y = c+1;
    while(x >= 0 && y < n){
        if(board[x][y] == 'Q'){
            return false;
        } 
        x--, y++;
    }

    return true;
}

void queenCheck(vector <string>& board, vector <vector<string>>& ans, int r, int n){
    if(r == n){
        ans.push_back(board);
        return;
    }
    for(int c=0; c<n; c++){
        if(check(board, r, c, n)){
            board[r][c] = 'Q';
            queenCheck(board, ans, r+1, n);
            board[r][c] = '.';
        }
    }
}

vector<vector<string>> solveNQueens(int n) {
    vector <vector<string>> ans;
    vector <string> board(n, string(n, '.'));

    queenCheck(board, ans, 0, n);
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 4;
    vector<vector<string>> v = solveNQueens(4);

    for(auto i : v){
        for(auto j : i){
            cout << "[";
            cout << j;
            cout << "]";
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}