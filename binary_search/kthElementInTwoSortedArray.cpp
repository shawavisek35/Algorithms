class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        if(m<n) return kthElement(arr2, arr1, m, n, k);
        int i = max(0, k-m);
        int j = min(k,n);
        while(i<=j) {
            int cut1 = i + (j-i)/2;
            int cut2 = k - cut1;
            
            int l1 = cut1 == 0 ? INT_MIN : arr1[cut1-1];
            int l2 = cut2 == 0 ? INT_MIN : arr2[cut2-1];
            int r1 = cut1 == n ? INT_MAX : arr1[cut1];
            int r2 = cut2 == m ? INT_MAX : arr2[cut2];
            
            if(l1<=r2 && l2<=r1) {
                return max(l1, l2);
            }
            else if(l1>r2) {
                j = cut1 -1;
            }
            else {
                i = cut1 + 1;
            }
        }
        return -1;
    }
};
