//Bellman Ford Algorithm
class Solution {
public:
	int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	    vector<int> distance(n, INT_MAX);
	    distance[0] = 0;
	    for(int i=1;i<n;i++) {
	        for(auto it : edges) {
	            int u = it[0];
	            int v = it[1];
	            int w = it[2];
                if(distance[u] == INT_MAX) continue;
	            if(distance[u] + w < distance[v]) {
	                distance[v] = distance[u] + w;
	            }
	        }
	    }
	    
	    for(auto it : edges) {
	       int u = it[0];
	       int v = it[1];
	       int w = it[2];
	            
	       if(distance[u] + w < distance[v]) {
	           return 1;
	       }
	    }
	    
	    return 0;
	}
};