/*
  Using Dijkstra Algorithm with Dynamic programming to solve this problem.
*/

#define MAX 1000000007

class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<pair<int, int>> adj[n];
        for(auto it : roads) {
            int u = it[0];
            int v = it[1];
            int time = it[2];
            adj[u].push_back({v, time});
            adj[v].push_back({u, time});
        }
        priority_queue<pair<long long, int>, vector<pair<long long ,int>>, greater<pair<long long, int>>> pq;
        vector<long long> distance(n, LLONG_MAX);
        vector<int> ways(n, 0);
        pq.push({0, 0});
        distance[0] = 0;
        ways[0] = 1;
        while(!pq.empty()) {
            pair<long long, int> p = pq.top();
            pq.pop();
            
            //if(p.second == n-1) ans++;
            
            for(auto it : adj[p.second]) {
                int x = it.first;
                int t = it.second;
                if(distance[x] > t + p.first) {
                    distance[x] = t + p.first;
                    pq.push({distance[x], x});
                    ways[x] = ways[p.second];
                }
                else if(distance[x] == t + p.first) ways[x]  = (ways[x] + ways[p.second])%MAX;
            }
        }
        
        return ways[n-1];
    }
};