class Solution {
public:
    
    int maxSubArraySum(vector<int> &nums, int k) {
        int sum = 0;
        int i = 0;
        int j = 0;
        int maxS = INT_MIN;
        while(j<nums.size()) {
            sum += nums[j];
            if(j-i+1 == k) {
                maxS = max(maxS, sum);
            }
            if(j-i+1 > k) {
                sum -= nums[i];
                maxS = max(maxS, sum);
                i++;
            }
            j++;
        }
        return maxS;
    }
    
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int i = 1;
        int j = n;
        int res = 0;
        while(i<=j) {
            int mid = i + (j-i)/2;
            int sum = maxSubArraySum(nums, mid);
            if(sum>=target) {
                res = mid;
                j = mid - 1;
            }
            else {
                i = mid + 1;
            }
        }
        return res;
    }
};
