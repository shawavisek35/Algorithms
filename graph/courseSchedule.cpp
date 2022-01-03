/*
    Check it there exists a cycle in the Directed Graph
    If yes -> return false because Topo Sort is not possible. 
    If no -> return true because Topo Sort is possible.
*/
class Solution {
public:
    
    //function to check if there exists any cycle in the graph
    bool containCycle(int node, vector<int> graph[], vector<bool> &visited, vector<bool> &pathVisited) {
        visited[node] = true;
        pathVisited[node] = true;
        for(auto it : graph[node]) {
            if(!visited[it]) {
                if(containCycle(it, graph, visited, pathVisited)) return true;
            }
            else{
                if(pathVisited[it]) return true;
            }
        }
        pathVisited[node] = false;
        return false;
    }
    
    bool canFinish(int n, vector<vector<int>>& pre) {
        
        vector<int> graph[n];
        
        //form the graph;
        for(auto it : pre) {
            int u = it[0];
            int v = it[1];
            graph[v].push_back(u);
        }
        
        vector<bool> visited(n, false);
        vector<bool> pathVisited(n, false);
        
        for(int i=0;i<n;i++) {
            if(!visited[i]) {
                if(containCycle(i, graph, visited, pathVisited)) return false;
            }
        }
        
        return true;
    }
};