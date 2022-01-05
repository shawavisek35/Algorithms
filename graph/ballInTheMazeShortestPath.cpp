class Solution {
public:

    /**
     * @param maze: the maze
     * @param start: the start
     * @param destination: the destination
     * @return: the shortest distance for the ball to stop at the destination
        Using Djikstra Algorithm to calculate shortest distance
     */

    int shortestDistance(vector<vector<int>> &maze, vector<int> &start, vector<int> &destination) {
        int n = maze.size();
        int m = maze[0].size();
        vector<pair<int, int>> moves = {{1,0}, {-1,0}, {0,1}, {0,-1}};
        vector<vector<int>> distance(n, vector<int> (m, INT_MAX));
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> q;
        q.push({0, {start[0], start[1]}});

        while(!q.empty()) {
            pair<int, pair<int, int>> p = q.top();
            q.pop();

            if(p.second.first == destination[0] && p.second.second == destination[1]) return p.first;
            for(auto it : moves) {
                int dx = p.second.first;
                int dy = p.second.second;
                int cnt = 1;
                while(dx<n && dy<m && dx>=0 && dy>=0 && maze[dx][dy] == 0) {
                    dx += it.first;
                    dy += it.second;
                    if(dx<n && dy<m && dx>=0 && dy>=0 && maze[dx][dy] == 0) cnt++;
                }
                dx -= it.first;
                dy -= it.second;
                cnt--;
                
                if(distance[dx][dy] > p.first + cnt) {
                    distance[dx][dy] = p.first + cnt;
                    q.push({distance[dx][dy], {dx, dy}});
                }
            
            }
        }

        return -1;
    }
};