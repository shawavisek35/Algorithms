//BFS of a graph
class Solution {
  public:
  
    void bfs(vector<int> adj[], int node, vector<int> &ans, vector<bool> &visited) {
        queue<int> q;
        q.push(node);
        visited[node] = true;
        while(!q.empty()) {
            int currNode = q.front();
            q.pop();
            ans.push_back(currNode);
            for(auto it : adj[currNode]) {
                if(!visited[it]) {
                    q.push(it);
                    visited[it] = true;
                }
            }
        }
        return;
    }
  
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ans;
        vector<bool> visited(V, false);
        //for loops for multiple components in a disconnected graph
        for(int i=0;i<V;i++) {
            if(!visited[i]) {
                bfs(adj, i, ans, visited);
            }
        }
        return ans;
    }
};