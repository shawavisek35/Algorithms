
class Solution{
  public:
    int longestKSubstr(string s, int k) {
        unordered_map<char, int> mp;
        int n = s.size();
        int j = 0;
        int i = 0;
        int ans = -1;
        while(j<n) {
            
            mp[s[j]]++;
            
            //equals to k characters
            if(mp.size() == k) {
                ans = max(ans, j-i+1);
            }
            
            //greater than k characters
            else if(mp.size() > k) {
                mp[s[i]]--;
                if(mp[s[i]] == 0) {
                    mp.erase(s[i]);
                }
                i++;
            }
            
            j++;
        }
        return ans;
    }
};
