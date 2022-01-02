/*
    This problem can be solved using Topo Sort
    Just topo sort the courses in any order.
    And also check for cycle in DAG simultaneously
*/

class Solution {
public:
    
    bool topoSortUtil(int node, vector<int> adj[], vector<bool> &visited, stack<int> &topo, vector<bool> &pathVisited) {
        visited[node] = true;
        pathVisited[node] = true;
        for(auto it : adj[node]) {
            if(!visited[it]) {
                if(topoSortUtil(it, adj, visited, topo, pathVisited)) return true;
            }
            else {
                if(pathVisited[it]) return true;
            }
        }
        
        pathVisited[node] = false;
        topo.push(node);
        return false;;
    }
    
    vector<int> findOrder(int n, vector<vector<int>>& pre) {
        vector<int> res;
        vector<bool> visited(n, false);
        vector<bool> pathVisited(n, false);
        vector<int> adj[n];
        stack<int> topo;
        
        for(auto it : pre) {
            adj[it[1]].push_back(it[0]);
        }
        
        for(int i=0;i<n;i++) {
            if(!visited[i]) {
                if(topoSortUtil(i, adj, visited, topo, pathVisited)) return res;
            }
        }
        
        while(!topo.empty()) {
            res.push_back(topo.top());
            topo.pop();
        }
        
        return res;
    }
};