//find shortest safe route in a path with landmines
#include<bits/stdc++.h>
using namespace std;

class Points {
    public:
        int x;
        int y;
        Points(int _x, int _y) {
            this->x = _x;
            this->y = _y;
        }
};

void findShortestPath(int mat[13][11], int row, int col) {
    queue<Points> q;
    vector<vector<int>> visited(row, vector<int>(col, -1));
    vector<pair<int, int>> moves = {{0,1}, {0,-1}, {1,0}, {-1,0}};
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            if(mat[i][j] == 0) {
                for(auto it : moves) {
                    int dx = i + it.first;
                    int dy = j + it.second;
                    if(dx>=0 && dy>=0 && dx<row && dy<col) {
                        mat[dx][dy] = -1;
                    }
                }
            }
        }
    }
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            if(mat[i][j] == -1) {
                mat[i][j] = 0;
            }
        }
        
    }
    int res = INT_MAX;
    for(int i=0;i<row;i++) {
        if(mat[i][0] == 1) {
            q.push(Points(i,0));
            visited[i][0] = 1;
        }
    }
    while(!q.empty()) {
        Points p = q.front();
        int dis = visited[p.x][p.y];
        q.pop();
        for(auto t : moves) {
            int dx = p.x + t.first;
            int dy = p.y + t.second;
            if(dx>=0 && dy>=0 && dx<row && dy<col && visited[dx][dy] == -1 && mat[dx][dy] == 1) {
                q.push(Points(dx, dy));
                visited[dx][dy] = dis + 1;
            }
        }
    }
    for(int i=0;i<row;i++) {
        if(visited[i][col-1] != -1)
        res = min(res, visited[i][col-1]);
    }
    cout << res << "\n";
}

// Driver code
int main()
{
    // input matrix with landmines shown with number 0
    int mat[13][11] =
    {
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 0, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 0, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 0, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 0, 1, 1, 1, 1 },
        { 1, 0, 1, 1, 1, 1, 1, 1, 0, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 0, 1, 1, 1, 1, 0, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 0, 1, 1, 1, 1, 1, 1 }
    };
 
    // find shortest path
    findShortestPath(mat, 12, 10);
 
    return 0;
}
