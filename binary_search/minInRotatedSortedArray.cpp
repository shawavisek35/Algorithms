class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = n - 1;
        int res = INT_MAX;
        while(i<=j) {
            int mid = i + (j-i)/2;
            if(nums[mid] > nums[j]) {
                i = mid + 1;
            }
            else {
                res = min(res, nums[mid]);
                j = mid - 1;
            }
        }
        return res;
    }
};
