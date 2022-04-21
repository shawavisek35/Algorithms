class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int j=0;
        unordered_map<char, int> mp;
        int n = s.size();
        int ans = 0;
        while(j<n) {
            mp[s[j]]++;
            if(mp[s[j]] > 1) {
                while(i<n && mp[s[j]] > 1) {
                    mp[s[i]]--;
                    if(mp[s[i]] == 0) {
                        mp.erase(s[i]);
                    }
                    i++;
                }
            }
            int count = mp.size();
            ans = max(ans, count);
            j++;
        }
        return ans;
    }
};
