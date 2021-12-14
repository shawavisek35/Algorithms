class Solution{
public:

    bool isSafe(vector<vector<bool>> &visited, int row1, int col1, int n) {
        int row = row1;
        int col = col1;
        while(col >=1) {
            if(visited[row][col]) return false;
            col--;
        }
        row = row1;
        col = col1;
        while(row>=1 && col>=1) {
            if(visited[row][col]) return false;
            col--;
            row--;
        }
        
        row=row1;
        col = col1;
        while(row<=n && col>=1) {
            if(visited[row][col]) return false;
            col--;
            row++;
        }
        return true;
    }

    void findQueens(vector<vector<int>> &ans, vector<int> res, int col, int n, vector<vector<bool>> &visited) {
        if(col > n) {
            ans.push_back(res);
            return;
        }
        
        for(int row = 1;row<=n;row++){
            if(isSafe(visited, row, col, n)) {
                res.push_back(row);
                visited[row][col] = true;
                findQueens(ans, res, col+1, n, visited);
                //backtrack
                res.pop_back();
                visited[row][col] = false;
            }
        }
        return;
    }

    vector<vector<int>> nQueen(int n) {
        vector<vector<int>> ans;
        vector<int> res;
        vector<vector<bool>> visited(n+1, vector<bool>(n+1, false));
        findQueens(ans, res, 1, n, visited);
        return ans;
    }
};