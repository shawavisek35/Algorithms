#include<vector>
#include<string>
using namespace std;

void solve(int x, int y, int n, vector<string> &ans, string output, vector<vector<int>> &m) {
        if(x<0 || y<0 || x>=n || y>=n){
            return;
        }
        
        if(m[x][y] == 0){
            return;
        }
        if(x==n-1 && y==n-1) {
            ans.push_back(output);
            return;
        }
        
        
        solve(x, y+1, n, ans, output+"R", m);
        solve(x, y-1, n, ans, output+"L", m);
        solve(x+1, y, n, ans, output+"D", m);
        solve(x-1, y, n, ans, output+"U", m);
        return;
        
}
    
vector<string> findPath(vector<vector<int>> &m, int n) {
    vector<string> ans;
    solve(0,0,n,ans,"",m);
    return ans;
}

int main () {
  vector<vector<int>> m = {
    {1, 0},
    {1, 0}
  };
  findPath(m,2);
}