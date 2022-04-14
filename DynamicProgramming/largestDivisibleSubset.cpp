class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1, 1);
        vector<int> hash;
        int ans = 1;
        int ansIndex = 0;
        for(int i=0;i<n;i++) {
            hash.push_back(i);
        }
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++) {
            for(int j=0;j<i;j++) {
                if(nums[i]%nums[j] == 0) {
                    if(dp[i] < 1 + dp[j]) {
                        dp[i] = 1 + dp[j];
                        hash[i] = j;
                    }
                }
            }
            if(ans < dp[i]) {
                ansIndex = i;
                ans = dp[i];
            }
        }
        
        deque<int> q;
        int i = ansIndex;
        while(i != hash[i]) {
            q.push_front(nums[i]);
            i = hash[i];
        }
        q.push_front(nums[i]);
        vector<int> res;
        for(auto it : q) {
            res.push_back(it);
        }
        return res;
    }
};
