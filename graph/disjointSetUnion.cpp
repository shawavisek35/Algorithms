/*
    Implementation of disjoint set union with path compression and size as well as rank
*/

#include<bits/stdc++.h>
using namespace std;

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

int main() {
    
    return 0;
}