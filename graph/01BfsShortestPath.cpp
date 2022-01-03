/*
    0/1 BFS Algorithm
    Shortest path in the graph with weights as 0 and 1 only from starting node to all other nodes. 
*/
#include<bits/stdc++.h>
using namespace std;

//used for graph construction
struct Edge {
    int node;
    int weight;
    
    Edge(int _node, int _weight) {
        this->node = _node;
        this->weight = _weight;
    }
};

//used by dequeue
struct Node {
    int point;
    int distance;
    
    Node(int _point, int _d) {
        this->point = _point;
        this->distance = _d;
    }
};

vector<int> findDistance(vector<Edge> adj[], int source, int v) {
    vector<int> distance(v, INT_MAX);
    distance[source] = 0;
    deque<Node> q;
    q.push_front(Node(source, 0));
    
    while(!q.empty()) {
        Node p = q.front();
        q.pop_front();
        for(Edge it : adj[p.point]) {
            distance[it.node] = min(distance[it.node], p.distance+it.weight);
            if(distance[it.node] == 0) q.push_front(Node(it.node, distance[it.node]));
            else q.push_back(Node(it.node, distance[it.node]));
        }
    }
    
    return distance;
}

int main() {
    vector<Edge> adj[9];
    adj[0].push_back(Edge(1, 0));
    adj[0].push_back(Edge(7, 1));
    adj[1].push_back(Edge(7, 1));
    adj[1].push_back(Edge(2, 1));
    adj[2].push_back(Edge(3, 0));
    adj[2].push_back(Edge(5, 0));
    adj[2].push_back(Edge(8, 1));
    adj[3].push_back(Edge(4, 1));
    adj[3].push_back(Edge(5, 1));
    adj[4].push_back(Edge(5, 1));
    adj[5].push_back(Edge(6, 1));
    adj[6].push_back(Edge(7, 1));
    adj[7].push_back(Edge(8, 1));
    
    int source = 0;
    int v = 9;
    vector<int> dist = findDistance(adj, source, 9);
    
    for(auto it : dist) {
        cout << it << " ";
    }
    
    return 0;
}