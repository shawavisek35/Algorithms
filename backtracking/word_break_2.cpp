class Solution{
public:

    bool dictContains(string word, vector<string> dict) {
        for(auto w : dict) {
            if(w == word) return true;
        }
        return false;
    }

    void findWords(vector<string> &ans, string s, int n, vector<string> dict, string res) {
        for(int i=1;i<=n;i++) {
            string prefix = s.substr(0, i);
            if(dictContains(prefix, dict)) {
                if(i==n){
                    res += prefix;
                    ans.push_back(res);
                }
                findWords(ans, s.substr(i), n-i, dict, res + prefix + " ");
                
            }
        }
        return;
    }

    vector<string> wordBreak(int n, vector<string>& dict, string s)
    {
        vector<string> ans;
        findWords(ans, s, s.size(), dict, "");
        return ans;
    }
};