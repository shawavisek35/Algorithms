#include<bits/stdc++.h>
using namespace std;

struct Node {
    int x;
    int y;
    Node(int _x, int _y) {
        this->x = _x;
        this->y = _y;
    }
};

bool findPath(vector<vector<int>> &maze, int n, int m, Node source, Node destination) {
    queue<Node> q;
    q.push(source);
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    vector<pair<int,int>> moves = {{1,0}, {-1,0}, {0,1}, {0,-1}};
    while(!q.empty()) {
        Node currNode = q.front();
        q.pop();
        if(currNode.x == destination.x && currNode.y == destination.y) return true;
        for(auto it : moves) {
            int dx = currNode.x + it.first;
            int dy = currNode.y + it.second;
            while(dx>=0 && dy>=0 && dx<n && dy<m && maze[dx][dy] == 0) {
                dx += it.first;
                dy += it.second;
            }
            dx -= it.first;
            dy -= it.second;
            if(maze[dx][dy] == 0 && !visited[dx][dy]) {
                visited[dx][dy] = true;
                q.push(Node(dx, dy));
            }
        }
    }
    return false;
}

int main(){
    Node source = Node(0,4);
    Node destination = Node(4,4);
    
    vector<vector<int>> maze;
    maze.push_back({0,0,1,0,0});
    maze.push_back({0,0,0,0,0});
    maze.push_back({0,0,0,1,0});
    maze.push_back({1,1,0,1,1});
    maze.push_back({0,0,0,0,0});
    
    cout << findPath(maze, 5, 5, source, destination);
    return 0;
}

