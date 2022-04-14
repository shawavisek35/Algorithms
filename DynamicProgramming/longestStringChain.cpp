class Solution {
public:
    
    
    bool comparator(string &word1, string &word2) {
        int i = 0;
        int j = 0;
        while(i<word1.size() && j<word2.size()) {
            if(word1[i] == word2[j]) {
                i++;
                j++;
            }
            else {
                i++;
            }
        }
        
        if(i==word1.size() && j==word2.size()) {
            return true;
        }
        else {
            return false;
        }
    }
    static bool compare(const string &s1, const string &s2) {
        return s1.size() < s2.size();
    }
    
    int longestStrChain(vector<string>& words) {
        int n = words.size();
        int res = INT_MIN;
        vector<int> dp(n+1, 1);
        sort(words.begin(), words.end(), compare);
        for(int i=0;i<n;i++) {
            for(int j=0;j<i;j++) {
                if(comparator(words[i], words[j]) && dp[i] < dp[j]+1) {
                    dp[i] = dp[j] + 1;
                }
            }
            res = max(res, dp[i]);
        }
        return res;
    }
};
