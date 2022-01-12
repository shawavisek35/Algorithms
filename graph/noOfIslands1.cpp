class Solution {
  public:
  
    class DSU {
        public:
        vector<int> parent;
        vector<int> size;
        
        DSU(int n) {
            for(int i=0;i<=n;i++) {
                parent.push_back(i);
                size.push_back(1);
            }
        }
        
        int findParent(int node) {
            if(node == parent[node]) return node;
            
            //path compression
            return parent[node] = findParent(parent[node]);
        }
        
        void unionBySize(int u, int v) {
            int pu = findParent(u);
            int pv = findParent(v);
            
            if(pu==pv) return;
            
            if(size[pu] > size[pv]) {
                parent[pv] = pu;
                size[pu] += size[pv];
            }
            else{
                parent[pu] = pv;
                size[pv] += size[pu];
            }
        }
    };
    
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        DSU dsu = DSU(n*m+1);
        int islandCount = 0;
        vector<pair<int,int>> moves = {{1,0}, {-1,0}, {0,1}, {0,-1}, {-1,-1}, {-1,1}, {1,-1}, {1,1}};
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(grid[i][j] == '1') {
                    islandCount++;
                    int index1 = (i*m) + j;
                    for(auto it : moves) {
                        int dx = i + it.first;
                        int dy = j + it.second;
                        if(dx>=0 && dy>=0 && dx<n && dy<m && grid[dx][dy] == '1') {
                            int index2 = (dx*m) + dy;
                            if(dsu.findParent(index1) != dsu.findParent(index2)) {
                                dsu.unionBySize(index1, index2);    
                                islandCount--;
                            }
                        }
                    }
                }
            }
        }
        return islandCount;
    }
};