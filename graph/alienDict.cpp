class Solution{
    public:
    
    void dfs(int node, vector<vector<int>> adj, string &ans, vector<bool> &visited) {
        visited[node] = true;
        for(auto it : adj[node]) {
            if(!visited[it]) dfs(it, adj, ans, visited);
        }
        
        char src = node + 'a';
        ans = src + ans;
        return;
    }
    
    string findOrder(string dict[], int N, int K) {
        vector<vector<int>> adj(K);
        for(int i=0;i<N-1;i++) {
            string w1 = dict[i];
            string w2 = dict[i+1];
            
            int j = 0;
            while(j<min(w1.size(), w2.size())) {
                if(w1[j] != w2[j]) {
                    adj[w1[j] - 'a'].push_back(w2[j] - 'a');
                    break;
                }
                j++;
            }
            
        }
        
        string ans = "";
        vector<bool> visited(K, false);
        
        for(int i=0;i<K;i++) {
            if(!visited[i]) dfs(i, adj, ans, visited);
        }
        
        return ans;
    }
};