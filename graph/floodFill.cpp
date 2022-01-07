class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int n = image.size();
        int m = image[0].size();
        vector<pair<int, int>> moves = {{0,1}, {0,-1}, {1,0}, {-1,0}};
        int currentColor = image[sr][sc];
        queue<pair<int, int>> q;
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        visited[sr][sc] = true;
        q.push({sr, sc});
        image[sr][sc] = newColor;
        while(!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            for(auto it : moves) {
                int dx = x + it.first;
                int dy = y + it.second;
                
                if(dx>=0 && dy>=0 && dx<n && dy<m && !visited[dx][dy] && image[dx][dy] == currentColor) {
                    visited[dx][dy] = true;
                    image[dx][dy] = newColor;
                    q.push({dx, dy});
                }
            }
        }
        
        return image;
    }
};