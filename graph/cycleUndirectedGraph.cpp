//Cycle detection in an undirected graph

class Solution {
  public:
  
    void detectCycle(int node, int parent, vector<bool> &visited, bool &ans, vector<int> adj[]) {
        visited[node] = true;
        for(auto it : adj[node]) {
            if(!visited[it]) {
                detectCycle(it, node, visited, ans, adj);
            }
            else{
                if(it != parent) {
                    ans = true;
                }
            }
        }
        return;
    }
  
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        vector<bool> visited(V, false);
        bool ans = false;
        for(int i=0;i<V;i++) {
            if(!visited[i]) {
                detectCycle(i, -1, visited, ans, adj);
            }
        }
        return ans;
    }
};

//same process but only through function returns
class Solution {
  public:
  
    bool detectCycle(int node, int parent, vector<bool> &visited, vector<int> adj[]) {
        visited[node] = true;
        for(auto it : adj[node]) {
            if(!visited[it]) {
                if(detectCycle(it, node, visited, adj)) return true;
            }
            else{
                if(it != parent) return true;
            }
        }
        return false;
    }
  
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        vector<bool> visited(V, false);
        //bool ans = false;
        for(int i=0;i<V;i++) {
            if(!visited[i]) {
                if(detectCycle(i, -1, visited, adj)) return true;
            }
        }
        return false;
    }
};