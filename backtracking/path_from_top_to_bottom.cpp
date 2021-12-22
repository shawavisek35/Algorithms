//find shortest route in a path with landmines
#include<bits/stdc++.h>
using namespace std;


void printAllPaths(int mat[2][3], int n, int m, int x, int y, int path) {
    if(x == n-1 && y==m-1) {
        cout << path *10 + mat[x][y] << "\n";
        return;
    }
    vector<pair<int,int>> moves = {{0,1}, {1,0}};
    for(auto it : moves) {
        int dx = x + it.first;
        int dy = y + it.second;
        if(dx>=0 && dy>=0 && dx<n && dy<m) {
            printAllPaths(mat, n, m, dx, dy, path*10 + mat[x][y]);
        }
    }
}

int main()
{
    int mat[3][3] = { { 1, 2, 3 },
                      { 4, 5, 6 },
                      { 7, 8, 9 }};
    printAllPaths(mat, 3, 3, 0, 0, 0);
    return 0;
}