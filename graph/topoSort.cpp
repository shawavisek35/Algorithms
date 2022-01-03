class Solution
{
	public:
	
	void dfs(int node, stack<int> &nodes, vector<bool> &visited, vector<int> adj[]) {
	    visited[node] = true;
	    for(auto it : adj[node]) {
	        if(!visited[it]) dfs(it, nodes, visited, adj);
	    }
	    nodes.push(node);
	    return;
	}
	
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<bool> visited(V, false);
	    stack<int> nodes;
	    vector<int> res;
	    for(int i=0;i<V;i++) {
	        if(!visited[i]) dfs(i, nodes, visited, adj);
	    }
	    
	    while(!nodes.empty()) {
	        res.push_back(nodes.top());
	        nodes.pop();
	    }
	    
	    return res;
	}
};