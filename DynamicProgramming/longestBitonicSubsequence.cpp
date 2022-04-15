class Solution{
	public:
	
	vector<int> calculateLis(vector<int> &nums, int n) {
	    vector<int> dp(n, 1);
	    for(int i=0;i<n;i++) {
	        for(int j=0;j<i;j++) {
	            if(nums[i] > nums[j] && dp[i] < 1 + dp[j]) {
	                dp[i] = 1 + dp[j];
	            }
	        }
	    }
	    return dp;
	}
	
	int LongestBitonicSequence(vector<int>nums)
	{
	    //calculating longest increasing subsequence
	    int n = nums.size();
	    vector<int> fDp = calculateLis(nums, n);
	    
	    //calculating longest increasing subsequence from back
	    reverse(nums.begin(), nums.end());
	    vector<int> bDp = calculateLis(nums, n);
	    reverse(bDp.begin(), bDp.end());
	    
	    int ans = INT_MIN;
	    for(int i=0;i<n;i++) {
	        ans = max(ans, fDp[i] + bDp[i] - 1);
	    }
	    
	    return ans;
	}
};
