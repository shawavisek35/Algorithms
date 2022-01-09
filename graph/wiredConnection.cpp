class Solution {
public:
    
    class DSU {
        public:
        vector<int> parent;
        vector<int> size;
        
        public:
        DSU(int n) {
            for(int i=0;i<n;i++) {
                parent.push_back(i);
                size.push_back(1);
            }
        }
        
        int findParent(int node) {
            if(parent[node] == node) {
                return node;
            }
            return parent[node] = findParent(parent[node]);
        }
        
        bool unionBySize(int u, int v) {
            int pu = findParent(u);
            int pv = findParent(v);
            
            if(pu==pv) return false;
            
            if(size[pu] > size[pv]) {
                parent[pv] = pu;
                size[pu] += size[pv];
            }
            else{
                parent[pu] = pv;
                size[pv] += size[pu];
            }
            return true;
        }
    };
    
    int makeConnected(int n, vector<vector<int>>& connections) {
        DSU dsu = DSU(n);
        int cycle = 0;
        for(auto it : connections) {
            int u = it[0];
            int v = it[1];
            if(!dsu.unionBySize(u, v)) {
                cycle ++;
            }
        }
        set<int> p;
        for(int i=0;i<n;i++) {
            p.insert(dsu.findParent(i));
        }
        int component = p.size();
        if(cycle>=component-1) return component - 1;
        return -1;
    }
};

//Another Approach
class Solution {
public:
    
    void dfs(vector<int> adj[], vector<bool> &visited, int node) {
        visited[node] = true;
        for(auto it : adj[node]) {
            if(!visited[it]) {
                dfs(adj, visited, it);
            }
        }
        return;
    }
    
    int makeConnected(int n, vector<vector<int>>& connections) {
        
        if(connections.size() < n-1) return -1;
        vector<int> adj[n];
        vector<bool> visited(n, false);
        for(auto it : connections) {
            int u = it[0];
            int v = it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int components = 0;
        for(int i=0;i<n;i++) {
            if(!visited[i]) {
                components ++;
                dfs(adj, visited, i);
            }
        }
        return components-1;
    }
};