class Solution {
public:
    
    int solve(vector<int> &nums, int i, int currMax, vector<vector<int>> &dp) {
        if(i<0) return 0;
        if(dp[i][currMax] != -1) return dp[i][currMax];
        if(nums[i] < nums[currMax]) {
            return dp[i][currMax] = max(1 + solve(nums, i-1, i, dp), solve(nums, i-1, currMax, dp));
        }
        return dp[i][currMax] = solve(nums, i-1, currMax, dp);
    }
    
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        nums.push_back(1e5);
        vector<vector<int>> dp(n+1, vector<int>(n+2, -1));
        return solve(nums, n-1, n, dp);
    }
    
    //tabulation
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(2, vector<int> (n+1, 0));
        for(int i=n-1;i>=0;i--) {
            for(int j=i-1;j>=-1;j--) {
                int ans = dp[(i+1)%2][j+1];
                if(j == -1 || nums[i] > nums[j]) {
                    ans = max(ans, 1 + dp[(i+1)%2][i+1]);
                }

                dp[i%2][j+1] = ans;
            }
        }
        return dp[0][0];
    }
    
    //optimised tabulation
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1, 1);
        int ans = 1;
        for(int i=0;i<n;i++) {
            for(int j=0;j<i;j++) {
                if(nums[i] > nums[j]) {
                    dp[i] = max(dp[i], 1 + dp[j]);
                }
            }
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};

//LIS usng Binary Search
class Solution {
public:
    
    int lowerBound(vector<int> &nums, int key) {
        int i = 0;
        int j = nums.size() - 1;
        int res = -1;
        while(i<=j) {
            int mid = i + (j-i)/2;
            if(nums[mid] >= key) {
                res = mid;
                j = mid - 1;
            }
            else {
                i = mid + 1;
            }
        }
        return res == -1 ? nums.size() : res;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        for(int i=0;i<n;i++) {
            int index = lowerBound(res, nums[i]);
            if(index == res.size()) {
                res.push_back(nums[i]);
            }
            else {
                res[index] = nums[i];
            }
        }
        return res.size();
    }
};
