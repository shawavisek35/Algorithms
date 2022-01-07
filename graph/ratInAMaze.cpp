
class Solution{
    public:
    
    void dfs(vector<vector<int>> &m, int n, vector<string> &ans, vector<vector<bool>> &visited, int x, int y, string mo) {
        if(x==n-1 && y==n-1) {
            ans.push_back(mo);
            return;
        }
        vector<pair<pair<int,int>, string>> moves = {
            {{-1, 0}, "U"},
            {{1, 0}, "D"},
            {{0, -1}, "L"},
            {{0, 1}, "R"},
        };
        
        visited[x][y] = true;
        for(auto it : moves) {
            int dx = it.first.first + x;
            int dy = it.first.second + y;
            
            if(dx<n && dy<n && dx>=0 && dy>=0 && m[dx][dy] == 1 && !visited[dx][dy]) {
                visited[dx][dy] = true;
                dfs(m, n, ans, visited, dx, dy, mo+it.second);
                
                //backtrack
                visited[dx][dy] = false;
            }
        }
        //visited[x][y] = false;

    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        vector<vector<bool>> visited(n, vector<bool>(n, false));
        if(m[0][0] == 0) return ans;
        dfs(m, n, ans, visited, 0, 0, "");
        sort(ans.begin(), ans.end());
        return ans;
    }
};