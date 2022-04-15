class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int maxAns = 1;
        int n = nums.size();
        int res = 0;
        vector<int> dp(n, 1);
        vector<int> cut(n, 1);
        for(int i=0;i<n;i++) {
            for(int j=0;j<i;j++) {
                if(nums[i] > nums[j]) {
                    if(dp[i] < dp[j]+1) {
                        dp[i] = dp[j] + 1;    
                        cut[i] = cut[j];
                    }
                    else if(dp[i] == dp[j]+1) {
                        cut[i] += cut[j];
                    }
                }
            }
            if(maxAns < dp[i]) {
                maxAns = dp[i];
            }
        }
        
        for(int i=0;i<n;i++) {
            if(dp[i] == maxAns) {
                res += cut[i];
            }
        }
        
        return res;
    }
};
