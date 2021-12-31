//Cycle detection in Directed Graph

class Solution {
  public:
  
    bool detectCycle(int node, vector<bool> &visited, vector<bool> &tempVisited, vector<int> adj[]) {
        visited[node] = true;
        tempVisited[node] = true;
        
        for(auto it : adj[node]) {
            if(!visited[it]) {
                if(detectCycle(it, visited, tempVisited, adj)) return true;
            }
            else{
                if(tempVisited[it]) return true;
            }
        }
        tempVisited[node] = false;
        return false;
    }
  
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        vector<bool> visited(V, false);
        vector<bool> tempVisited(V, false);
        
        for(int i=0;i<V;i++) {
            if(detectCycle(i, visited, tempVisited, adj)) return true;
        }
        
        return false;
    }
};