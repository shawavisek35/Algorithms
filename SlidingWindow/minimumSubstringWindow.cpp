class Solution {
public:
    string minWindow(string s, string t) {
        int i=0;
        int j=0;
        int cnt = 0;
        int n = s.size();
        unordered_map<char, int> mp;
        int res = INT_MAX;
        string ans = "";
        for(auto it : t) {
            mp[it]++;
        }
        cnt = mp.size();
        while(j<n) {
            if(mp.find(s[j]) != mp.end()) {
                mp[s[j]]--;
                if(mp[s[j]] == 0) cnt --;
            }
            
            if(cnt == 0) {
                if(res > j-i+1) {
                    res = j - i + 1;
                    ans = s.substr(i, j-i+1);
                }
                while(i<n && cnt == 0) {
                    if(mp.find(s[i]) != mp.end()) {
                        mp[s[i]]++;
                        if(mp[s[i]] == 1) {
                            cnt++;
                        }
                    }
                    i++;
                    if(cnt == 0 && res > j-i+1) {
                        res = j - i + 1;
                        ans = s.substr(i, j-i+1);
                    }
                }
            }
            j++;
        }
        
        return ans;
    }
};
