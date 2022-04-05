class Solution 
{
    public:
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        int i = INT_MIN;
        int j = 0;
        for(int k=0;k<N;k++) {
            j += A[k];
            i = max(i, A[k]);
        }
        
        int ans = j;
        while(i<=j) {
            int mid = (j-i)/2 + i;
            int k = 0;
            int cnt = 0;
            while(k<N) {
                int sum = 0;
                while(k<N && sum + A[k] <= mid) {
                    sum += A[k];
                    k++;
                }
                cnt ++;
            }
            if(cnt > M) {
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
