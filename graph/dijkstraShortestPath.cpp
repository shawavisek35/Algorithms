/*
  Finding the shortest path from node 1 to nth node 
  using DijKstra Algorithm in an undirected graph. 
*/

#include<bits/stdc++.h>
using namespace std;

struct Edge {
  int node;
  int weight;

  Edge(int _node, int _weight) {
    this->node = _node;
    this->weight = _weight;
  }
};

void dijkstra(int source, int n, vector<Edge> adj[]) {
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
  q.push({0, source});
  vector<int> distance(n+1, INT_MAX);
  vector<int> parent(n+1, -1);
  distance[source] = 0;
  
  while(!q.empty()) {
    pair<int, int> p = q.top();
    q.pop();

    for(Edge it : adj[p.second]) {
      int node = it.node;
      int w = it.weight;

      if(distance[node] > w+p.first) {
        distance[node] = w+p.first;
        parent[node] = p.second;
        q.push({distance[node], node});
      }
    }
  }
    
  if(distance[n] == INT_MAX) {
      cout << -1 << "\n";
      return;
  }
  
  deque<int> path;
  int p = n;
  while(p != -1) {
    path.push_front(p);
    p = parent[p];
  }

  for(auto it : path) {
    cout << it << " ";
  }

  return ;
}

int main() {
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);

  int n, m, u, v, w;
  cin >> n >> m;
  vector<Edge> adj[n+1];
  for(int i=0;i<m;i++) {
    cin >> u >> v >> w;
    adj[u].push_back(Edge(v, w));
    adj[v].push_back(Edge(u, w));
  }

  int source = 1;
  dijkstra(source, n, adj);
  return 0;
}

