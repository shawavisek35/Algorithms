class Solution {
public:
    
    int findSum(vector<int> &nums, int divisor) {
        int sum = 0;
        for(auto it : nums) {
            float val = it/(float)divisor;
            sum += (int)ceil(val);
        }
        return sum;
    }
    
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int res = 1;
        int i = 1;
        int j = INT_MIN;
        for(auto it : nums) {
            j = max(j, it);
        }
        while(i<=j) {
            int mid = i + (j-i)/2;
            int currSum = findSum(nums, mid);
            if(currSum <= threshold) {
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
