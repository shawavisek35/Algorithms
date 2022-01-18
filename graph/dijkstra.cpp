//Dijkstra Algorithm
#include<vector>
#include<queue>
using namespace std;
class Solution
{
	public:
	
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        vector<int> distance(V+1, INT_MAX);
        priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int,int>>> q;
        distance[S] = 0;
        q.push({0, S});
        
        while(!q.empty()) {
            pair<int,int> p = q.top();
            q.pop();
            
            for(auto it : adj[p.second]) {
                int v = it[0];
                int dis = it[1];
                
                if(distance[v] > dis + p.first) {
                    distance[v] = dis + p.first;
                    q.push({distance[v], v});
                }
            }
        }
        
        return distance;
    }
};