class Solution {
public:
    
    bool canColour(int node, vector<int> adj[], vector<int> &visited, int colour) {
        visited[node] = colour;
        for(auto it : adj[node]) {
            if(visited[it] == -1) {
                if(!canColour(it, adj, visited, 1-colour)) return false;
            }
            else if(visited[it] == colour) return false;
        }
        return true;
    }

	bool isBipartite(int V, vector<int>adj[]){
	    vector<int> visited(V, -1);
	    for(int i=0;i<V;i++) {
	        if(visited[i] == -1) {
	            if(!canColour(i, adj, visited, 0)) return false;
	        }
	    }
	    return true;
	}

};