/*
  Time Complexity -> O(n)
*/

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        //time complexity -> O(n)
        int n = nums.size();
        int i = 0;
        for(i=1;i<n;i++) {
            if(nums[i] < nums[i-1]) {
                break;
            }
        }
        return i-1;
    }
};

/*
  Time Complexity -> O(logn)
*/
