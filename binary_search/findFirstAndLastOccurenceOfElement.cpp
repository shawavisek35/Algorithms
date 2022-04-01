class Solution {
public:
    int findFirstOccurence(vector<int>& nums, int target) {
        int res = -1;
        int i = 0;
        int j = nums.size()-1;
        while(i<=j) {
            int mid = (j-i)/2 + i;
            if(nums[mid] == target) {
                res = mid;
                j = mid-1;
            }
            else if(nums[mid] < target) {
                i = mid+1;
            }
            else {
                j = mid - 1;
            }
        }
        return res;
    }
    
    int findLastOccurence(vector<int>& nums, int target) {
        int res = -1;
        int i = 0;
        int j = nums.size()-1;
        while(i<=j) {
            int mid = (j-i)/2 + i;
            if(nums[mid] == target) {
                res = mid;
                i = mid+1;
            }
            else if(nums[mid] < target) {
                i = mid+1;
            }
            else {
                j = mid - 1;
            }
        }
        return res;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findFirstOccurence(nums, target);
        int last = findLastOccurence(nums, target);
        return {first, last};
    }
};
