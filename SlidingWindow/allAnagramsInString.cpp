class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int i=0;
        int j=0;
        unordered_map<char,int> mp;
        for(auto it : p) {
            mp[it] ++;
        }
        int cnt = mp.size();
        int n = s.size();
        int k = p.size();
        while(j<n) {
            if(mp.find(s[j]) != mp.end()) {
                mp[s[j]]--;
                if(mp[s[j]] == 0) {
                    cnt--;
                }
            }
            if(j-i+1 == k) {
                if(mp.find(s[i]) != mp.end()) {
                    if(cnt == 0) {
                        ans.push_back(i);
                    }
                    mp[s[i]]++;
                    if(mp[s[i]] == 1) cnt++;
                }
                i++;
            }
            j++;
        }
        return ans;
    }
};
