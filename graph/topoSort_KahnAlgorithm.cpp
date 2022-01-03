class Solution
{
    //using Kahn Algorithm
    
	public:
	
	void calculateIndegree(vector<int> adj[], int node, vector<int> &indegree) {
	    for(auto it : adj[node]) {
	        indegree[it]++;
	    }
	    return;
	}
	
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int> inDegree(V, 0);
	    for(int i=0;i<V;i++) {
	        calculateIndegree(adj, i, inDegree);
	    }
	    
	    queue<int> q;
	    for(int i=0;i<V;i++) {
	        if(inDegree[i] == 0) {
	            q.push(i);
	        }
	    }
	    vector<int> res;
	    while(!q.empty()) {
	        int point = q.front();
	        q.pop();
	        res.push_back(point);
	        for(auto it : adj[point]) {
	            inDegree[it]--;
	            if(inDegree[it] == 0) q.push(it);
	        }
	    }
	    return res;
	}
};