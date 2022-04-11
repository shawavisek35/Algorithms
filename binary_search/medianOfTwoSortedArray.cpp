class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        if(m < n) return findMedianSortedArrays(nums2, nums1);
        int i = 0;
        int j = n;
        while(i<=j) {
            int cut1 = i + (j-i)/2;
            int cut2 = (n+m + 1)/2 - cut1;
            
            int l1 = cut1 == 0 ? INT_MIN : nums1[cut1 - 1];
            int l2 = cut2 == 0 ? INT_MIN : nums2[cut2 - 1];
            int r1 = cut1 == n ? INT_MAX : nums1[cut1];
            int r2 = cut2 == m ? INT_MAX : nums2[cut2];
            
            if(l1 <= r2 && l2 <= r1) {
                if((n+m)%2==0) {
                    return (max(l1, l2) + min(r1,r2)) / 2.0;
                }
                else {
                    return max(l1, l2);
                }
            }
            else if(l1 > r2) {
                j = cut1 - 1;
            }
            else {
                i = cut1 + 1;
            }
        }
        return 0.0;
    }
};
