class Solution
{
	public:
	
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        vector<int> key(V, INT_MAX);
        vector<int> parent(V, -1);
        vector<bool> mst(V, false);
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        pq.push({0, 0});
        int minWeight = 0;
        key[0] = 0;
        while(!pq.empty()) {
            int u = pq.top().second;
            pq.pop();
            mst[u] = true;
            for(auto it : adj[u]){
                int v = it[0];
                int weight = it[1];
                
                if(!mst[v] && weight < key[v]) {
                    key[v] = weight;
                    parent[v] = u;
                    pq.push({key[v], v});
                }
            
            }
        }
        for(int i=0;i<V;i++) {
            if(isMst[i]) {
                sum += key[i];
            }
        }
        return minWeight;
    }
};
