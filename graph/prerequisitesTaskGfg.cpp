class Solution {
public:

    bool containCycle(int node, vector<int> adj[], vector<bool> &visited, vector<bool> &pathVisited) {
        visited[node] = true;
        pathVisited[node] = true;
        for(auto it : adj[node]) {
            if(!visited[it]) {
                if(containCycle(it, adj, visited, pathVisited)) return true;
            }
            else {
                if(pathVisited[it]) return true;
            }
        }
        //backtrack
        pathVisited[node] = false;
        return false;
    }

	bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
	    vector<int> adj[N];
	    vector<bool> visited(N, false);
	    vector<bool> pathVisited(N, false);
	    
	    for(auto it : prerequisites) {
	        adj[it.second].push_back(it.first);
	    }
	    
	    for(int i=0;i<N;i++) {
	        if(!visited[i]) {
	            if(containCycle(i, adj, visited, pathVisited)) return false;
	        }
	    }
	    
	    return true;
	}
};