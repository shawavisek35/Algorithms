#include<vector>
using namespace std;
/**
 * Definition for a point.
 * struct Point {
 *     int x;
 *     int y;
 *     Point() : x(0), y(0) {}
 *     Point(int a, int b) : x(a), y(b) {}
 * };
 Using Disjoint set union method to solve this problem
 */

class Solution {
public:

    class DSU {
        private:
            vector<int> parent;
            vector<int> size;
            vector<int> rank;
        
        public:
            DSU(int n) {
                for(int i=0;i<n;i++) {
                    this->parent.push_back(i);
                    this->size.push_back(1);
                    this->rank.push_back(0);
                }
            }
        
            int findParent(int node) {
                if(this->parent[node] == node) return node;
                
                //path compression
                return parent[node] = findParent(parent[node]);
            }
        
            void unionBySize(int u, int v) {
                int pu = findParent(u);
                int pv = findParent(v);
                
                //both nodes belongs to the same component
                if(pu == pv) return;
                
                if(size[pu] > size[pv]) {
                    parent[pv] = pu;
                    size[pu] += size[pv];
                }
                else{
                    parent[pu] = pv;
                    size[pv] += size[pu];
                }
            }
        
            void unionByRank(int u, int v) {
                int pu = findParent(u);
                int pv = findParent(v);
                
                //both nodes belongs to the same component
                if(pu == pv) return;
                
                if(rank[pu] > rank[pv]) {
                    parent[pv] = pu;
                }
                else if(rank[pv] > rank[pu]){
                    parent[pu] = pv;
                }
                else{
                    parent[pv] = pu;
                    rank[pu]++;
                }
            }
    };
    /**
     * @param n: An integer
     * @param m: An integer
     * @param operators: an array of point
     * @return: an integer array
     */
    vector<int> numIslands2(int n, int m, vector<Point> &operators) {
        // write your code here
        DSU dsu = DSU(n*m);
        vector<int> ans;
        vector<vector<int>> grid(n, vector<int> (m, 0));
        vector<pair<int, int>> moves = {{0,1}, {0,-1}, {1,0}, {-1,0}};
        int cnt = 0;
        for(auto it : operators) {
            if(grid[it.x][it.y] == 1) {
                ans.push_back(cnt);
                continue;
            }
            cnt++;
            grid[it.x][it.y] = 1;
            int idx1 = it.x*m + it.y;
            for(auto mo : moves) {
                int dx = mo.first + it.x;
                int dy = mo.second + it.y;

                int idx2 = dx*m + dy;
                if(dx>=0 && dy>=0 && dx<n && dy<m && grid[dx][dy]==1 && dsu.findParent(idx1) != dsu.findParent(idx2)) {
                    cnt--;
                    dsu.unionBySize(idx1, idx2);
                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};