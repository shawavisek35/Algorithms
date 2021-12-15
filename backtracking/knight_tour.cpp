#include<bits/stdc++.h>
using namespace std;

bool isValid(int row, int col) {
    if(row<0 || col<0 || row>=7 || col>=7) {
        return false;
    }
    return true;
}

void knightOnChess(int chess[9][9], int count, int row, int col) {
    if(count == 63) {
        for(int i=0;i<8;i++) {
            for(int j=0;j<8;j++) {
                cout << chess[i][j];
            }
            cout << "\n";
        }
        return;
    }
    vector<pair<int, int>> moves = {{-2,-1}, {-2, 1}, {2, -1}, {2, 1}, {-1, -2}, {1, -2}, {-1, 2}, {1, 2}};
    for(auto move : moves) {
        int dRow = row+move.first;
        int dCol = col+move.second;
        if(isValid(dRow, dCol) && chess[dRow][dCol] == 0) {
            chess[dRow][dCol] = count + 1;
            knightOnChess(chess, count+1, dRow, dCol);
            chess[dRow][dCol] = 0;
        }
    }
    return;
}

int main() {
    int chess[9][9];
    memset(chess, 0, sizeof(chess));
    knightOnChess(chess, 0, 0, 0);
    for(int i=0;i<8;i++) {
        for(int j=0;j<8;j++) {
            cout << chess[i][j];
        }
        cout << "\n";
    }
    return 0;
}