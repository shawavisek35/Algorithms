//Rotten Oranges Leetcode
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Solution {
public:
    struct Oranges {
        int x;
        int y;
        int operation;
        
        Oranges(int _x, int _y, int _operation) {
            this->x = _x;
            this->y = _y;
            this->operation = _operation;
        }
    };
    
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        int countPureOranges = 0;
        queue<Oranges> q;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(grid[i][j] == 2) {
                    q.push(Oranges(i, j, 0));
                }
                else if(grid[i][j] == 1) {
                    countPureOranges++;
                }
            }
        }
        vector<pair<int,int>> moves = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        while(!q.empty()) {
            Oranges point = q.front();
            q.pop();
            ans = max(ans, point.operation);
            for(auto it : moves) {
                int dx = point.x + it.first;
                int dy = point.y + it.second;
                if(dx>=0 && dy>=0 && dx<n && dy<m && grid[dx][dy] == 1) {
                    countPureOranges--;
                    grid[dx][dy] = 2;
                    q.push(Oranges(dx, dy, point.operation + 1));
                }
            }
        }
        return countPureOranges == 0 ? ans : -1;
    }
};