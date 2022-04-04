class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        int n = nums.size();
        int j = 0;
        int i = INT_MIN;
        for(int k=0;k<n;k++) {
            j += nums[k];
            i = max(i, nums[k]);
        }
        
        int ans = i;
        while(i<=j) {
            int mid = i + (j-i)/2;
            vector<int> temp;
            int k = 0;
            while(k<n) {
                int sum = 0;
                while(k<n && sum + nums[k] <= mid) {
                    sum += nums[k];
                    k++;
                }
                temp.push_back(sum);
            }
            if(temp.size()>m) {
                i = mid + 1;
            }
            else {
                ans = mid;
                j = mid - 1;
            }
        }
        return ans;
    }
};
