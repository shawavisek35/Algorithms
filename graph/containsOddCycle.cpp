/*
    We can use the concept of Bipartite graph
    If we can colour the graph with help of
    2 different colors such that no 2 adjacent 
    nodes are of same color then we can say that it's a Bipartite grapg and it 
    contains an even length cycle. Otherwise It will be a Odd length cycle.
*/

#include<bits/stdc++.h>
using namespace std;

bool containOddCycle(int node, vector<int> adj[], vector<int> &colourVisited, int color) {
    colourVisited[node] = color;
    for(auto it : adj[node]) {
        if(colourVisited[it] == -1) {
            if(containOddCycle(it, adj, colourVisited, 1-color)) return true;
        }
        else{
            if(colourVisited[it] == color) return true;
        }
    }
    return false;
}

bool containsOdd(vector<int> adj[], int V) {
    vector<int> colourVisited(V, -1);
    for(int i=0;i<V;i++) {
        if(colourVisited[i] == -1){
            if(containOddCycle(i, adj, colourVisited, 0)) return true;
        }
    }
    return false;
}

// Driver program to test above function
int main()
{
    int V = 8;
    int E = 7;
    vector<int> adj[V];
    adj[0] = {1};
    adj[1] = {0, 2};
    adj[2] = {1, 3};
    adj[3] = {2, 4, 7};
    adj[4] = {3, 5};
    adj[5] = {4, 6};
    adj[6] = {5, 7};
    adj[7] = {3, 6};
    
    if(containsOdd(adj, V)) cout << "YES";
    else cout << "NO";
    
    return 0;
}