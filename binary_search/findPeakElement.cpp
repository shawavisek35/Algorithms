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
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = n-1;
        while(i<j) {
            int mid = i + (j-i)/2;
            if(nums[mid] > nums[mid + 1]) {
                j = mid;
            }
            else {
                i = mid + 1;
            }
        }
        return j;
    }
};
