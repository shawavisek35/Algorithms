class Solution{
  public:
  
    void solve(int a[], int n, int k, int count, bool &ans, long long target, vector<bool> &visited, long long curr_sum) {
        if(count == k-1) {
            ans = true;
            return;
        }
        if(curr_sum>target) return;
        if(curr_sum == target) {
            solve(a, n, k, count+1, ans, target, visited, 0);
        }
        for(int i=0;i<n;i++) {
            if(!visited[i]) {
                visited[i] = true;
                solve(a, n, k, count, ans, target, visited, curr_sum + a[i]);
                //backtrack
                visited[i] = false;
            }
        }
        return;
    }
  
    bool isKPartitionPossible(int a[], int n, int k)
    {
         long long sum = 0;
         for(int i=0;i<n;i++) {
             sum += a[i];
         }
         if(sum%k != 0) return false;
         vector<bool> visited(100, false);
         bool ans = false;
         vector<vector<int>> res(k, vector<int>());
         solve(a, n, k, 0, ans, sum/k, visited, 0);
         return ans;
         
    }
};