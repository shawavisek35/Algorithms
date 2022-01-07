/*
    Finding Bridges in a graph;
*/

int cnt = 0;
void dfs(vector<int> adj[], int node, int parent, vector<bool> &visited, vector<int> &tin, vector<int> &low) {
    visited[node] = true;
    tin[node] = low[node] = cnt++;
    for(auto it : adj[node]) {
        if(it == parent) continue;
        if(!visited[it]) {
            dfs(adj, it, node, visited, tin, low);
            low[node] = min(low[node], low[it]);
            
            if(low[it] > tin[node]) {
                //bridge found
                cout << it << " --> " << endl;
            }
        }
        else{
            low[node] = min(low[node], low[it]);
        }
    }
}