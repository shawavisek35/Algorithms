class Solution {
public:
    int maximizeSweetness(vector<int> &sweetness, int K) {
       int i = 1;
       int j = 0;
       for(auto it : sweetness) {
           j += it;
           //i = min(i, it);
       }
       int n = sweetness.size();
       int ans = 1;
       while(i<=j) {
           int mid = i + (j - i)/2;
           int cnt = 0;
           int k = 0;
           int sum = 0;
           while(k<n) {
              sum += sweetness[k];
              if(sum >= mid) {
                  sum = 0;
                  cnt ++;
              }
              k++;
           }
           if(cnt >= K) {
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
