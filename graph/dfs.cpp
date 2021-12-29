//DFS in a graph

class Solution {
  public:
  
    void dfs(vector<int> adj[], vector<int> &ans, int node, vector<bool> &visited) {
        ans.push_back(node);
        visited[node] = true;
        for(auto it : adj[node]) {
            if(!visited[it]) {
                dfs(adj, ans, it, visited);
            }
        }
        return;
    }
  
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ans;
        vector<bool> visited(V, false);
        //for loops for multiple components in a disconnected graph
        for(int i=0;i<V;i++) {
            if(!visited[i]) {
                dfs(adj, ans, i, visited);
            }
        }
        return ans;
    }
};