class Solution {
public:
    int maximizeSweetness(vector<int> &sweetness, int K) {
       int i = INT_MAX;
       int j = 0;
       for(auto it : sweetness) {
           j += it;
           i = min(i, it);
       }
        int n = sweetness.size();
       int ans = i;
       while(i<=j) {
           int mid = i + (j - i)/2;
           int sum = 0;
           int cnt = 0;
           for(int m=0;m<n;m++) {
               sum += sweetness[m];
               if(sum >= mid) {
                   sum = 0;
                   cnt ++;
               }
           }
           if(cnt >= K+1){
               ans = mid;
               i = mid + 1;
           }
           else {
               j = mid - 1;
           }
       }
       return ans;
    }
};
