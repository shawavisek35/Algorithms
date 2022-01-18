class Solution
{
	public:
	void topoSort(int node, vector<bool> &visited, stack<int> &topo, vector<int> adj[]) {
	    visited[node] = true;
	    for(auto it : adj[node]) {
	        if(!visited[it]) {
	            topoSort(it, visited, topo, adj);
	        }
	    }
	    topo.push(node);
	    return;
	}
	void dfs(int node, vector<bool> &visited, vector<int> adj[]) {
	    visited[node] = true;
	    for(auto it : adj[node]) {
	        if(!visited[it]) {
	            dfs(it, visited, adj);
	        }
	    }
	    return;
	}
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<int> adj[])
    {
        //step 1: Do topo Sort
        vector<bool> visited(V, false);
        stack<int> topo;
        for(int i=0;i<V;i++) {
            if(!visited[i]) {
                topoSort(i, visited, topo, adj);
            }
        }
        
        //step 2: transpose the graph;
        vector<int> graph[V];
        for(int i=0;i<V;i++) {
            for(auto it : adj[i]) {
                graph[it].push_back(i);
            }
        }
        
        //finding strongly connected components
        vector<bool> visited1(V, false);
        int cnt = 0;
        while(!topo.empty()){
            int i = topo.top();
            topo.pop();
            if(!visited1[i]) {
                cnt++;
                dfs(i, visited1, graph);
            }
        }
        
        return cnt;
    }
};