/*
  Minimum spanning tree using Krushkal Algorithm
*/

#include<bits/stdc++.h>
using namespace std;

class DSU {
  private:
  vector<int> parent;
  vector<int> size;

  public:
  DSU(int n) {
    for(int i=0;i<n;i++) {
      parent.push_back(i);
      size.push_back(1);
    }
  }

  int findParent(int node) {
    if(parent[node] == node) return node;

    //path compression
    return parent[node] = findParent(parent[node]);
  }

  void unionBySize(int u, int v) {
    int pu = findParent(u);
    int pv = findParent(v);

    if(pu == pv) return;

    if(size[pu] > size[pv]) {
      parent[pv] = pu;
      size[pu] += size[pv];
    }
    else{
      parent[pu] = pv;
      size[pv] += size[pu];
    }
  }
};

class Node {
  int u, v, wt;
  Node(int _u, int _v, int _w) {
    u = _u;
    v = _v;
    wt = _w;
  }
};

bool compareWeights(Node &a, Node &b) {
  return a.wt < b.wt;
}

void krushkalSpanning(int n, vector<Node> graph) {
  sort(graph.begin(), graph.end(), compareWeights);

  int spanCost = 0;
  DSU dsu = DSU(n);

  for(Node it : graph) {
    int u = it.u;
    int v = it.v;
    int w = it.wt;

    if(dsu.findParent(u) != dsu.findParent(v)) {
      dsu.unionBySize(u, v);
      spanCost += w;
    }

  }
}