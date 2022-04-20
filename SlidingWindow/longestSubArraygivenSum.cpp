class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        unordered_map<int, int> mp;
        int ans = 0;
        int j = 0;
        int sum = 0;
        while(j < N) {
            sum += A[j];
            if(sum == K) {
                ans = max(ans, j + 1);
            }
            if(mp.find(sum - K) != mp.end()) {
                ans = max(ans, j - mp[sum-K]);
            }
            if(mp.find(sum) == mp.end()) {
                mp[sum] = j;
            }
            j++;
        }
        return ans;
    } 

};
