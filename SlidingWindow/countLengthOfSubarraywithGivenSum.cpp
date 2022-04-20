class Solution {
public:
    
    int subarraySum(vector<int>& nums, int k) {
        int ans = 0;
        long long sum = 0;
        int i = 0;
        unordered_map<int, int> mp; 
        while(i<nums.size()) {
            sum += nums[i];
            if(sum == k) {
                ans ++;
            }
            if(mp.find(sum - k) != mp.end()) {
                ans += mp[sum-k];
            }
            mp[sum]++;
            i++;
        }
        return ans;
    }
};
