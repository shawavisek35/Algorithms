class Solution {
public:
    
    int findFactorial(int n) {
        if(n==1) return 1;
        return n * findFactorial(n-1);
    }
    
    void permutationUtil(vector<string> inp, string &ans, int k, int n) {
        if(inp.size() == 1) {
            ans += inp[0];
            return;
        }
        int si = findFactorial(n-1);
        int i = 0;
        while(i<n) {
            if(i * si > k) break;
            i++;
        }
        string a = inp[--i];
        ans += a;
        inp.erase(inp.begin() + i);
        permutationUtil(inp, ans, k%si, n-1);
        return;
    }
    
    string getPermutation(int n, int k) {
        vector<string> inp;
        for(int i=1;i<=n;i++) {
            inp.push_back(to_string(i));
        }
        string ans = "";
        permutationUtil(inp, ans, k-1, n);
        return ans;
    }
};