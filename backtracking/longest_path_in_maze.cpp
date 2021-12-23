//longest possible route from source to destination in a maze
#include<bits/stdc++.h>
using namespace std;
#define R 3
# define C 10

void findLongestPath(int mat[R][C], int sx, int sy, int dx, int dy, int &ans, int pathLength, vector<vector<bool>> &visited) {
    if(sx>=R || sy>=C || sx<0 || sy<0) return;    
    if(sx==dx && sy==dy) {
        ans = max(ans, pathLength);
        return;
    }
    vector<pair<int,int>> moves = {{0,1}, {1,0}, {0, -1}, {-1, 0}};
    for(auto it : moves) {
        int d_x = sx + it.first;
        int d_y = sy + it.second;
        if(d_x>=0 && d_y>=0 && d_x<R && d_y<C && mat[d_x][d_y] == 1 && !visited[d_x][d_y]) {
            visited[d_x][d_y] = true;
            findLongestPath(mat, d_x, d_y, dx, dy, ans, pathLength + 1, visited);
            visited[d_x][d_y] = false;
        }
    }
    return;
}

// Driver code
int main()
{
    int ans = INT_MIN;
    vector<vector<bool>> visited(R, vector<bool>(C, false));
    // input matrix with hurdles shown with number 0
    int mat[R][C] = { { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
                      { 1, 1, 0, 1, 1, 0, 1, 1, 0, 1 },
                      { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 } };
 
    // find longest path with source (0, 0) and
    // destination (1, 7)
    findLongestPath(mat, 0, 0, 1, 7, ans, 1, visited);
    cout << ans << "\n";
    return 0;
}