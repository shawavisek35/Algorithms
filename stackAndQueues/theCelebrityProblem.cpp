class Solution 
{
    public:
    
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        vector<int> indegree(n, 0), outdegree(n, 0);
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(M[i][j] == 1) {
                    indegree[j] ++;
                    outdegree[i] ++;
                }
            }
        }
        for(int i=0;i<n;i++) {
            if(indegree[i]==n-1 && outdegree[i] == 0) {
                return i;
            }
        }
        return -1;
    }
    
    //O(n) approach
    int celebrity(vector<vector<int> >& M, int n) 
    {
        int c = 0;
        for(int i=0;i<n;i++) {
            if(M[c][i]) {
                c = i;
            }
        }
        
        for(int i=0;i<n;i++) {
            if(c!=i && (M[c][i] || !M[i][c])) return -1;
        }
        
        return c;
    }
};
