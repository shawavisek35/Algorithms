class Solution {
public:
    
    int maxAreaHistogram(vector<int> arr, int n) {
        vector<int> right;
        vector<int> left;
        stack<int> rs;
        stack<int> ls;
        
        for(int i=n-1;i>=0;i--) {
            while(!rs.empty() && arr[rs.top()] >= arr[i]) {
                rs.pop();
            }
            if(rs.empty()) {
                right.push_back(n-i);    
            }
            else {
                right.push_back(rs.top() - i);
            }
            rs.push(i);
        }
        reverse(right.begin(), right.end());
        for(int i=0;i<n;i++) {
            while(!ls.empty() && arr[ls.top()] >= arr[i]) {
                ls.pop();
            }
            if(ls.empty()) {
                left.push_back(i+1);    
            }
            else {
                left.push_back(i-ls.top());
            }
            ls.push(i);
        }
        
        int ans = INT_MIN;
        for(int i=0;i<n;i++) {
            int temp = right[i] + left[i] - 1;
            ans = max(ans, temp * arr[i]);
        }
        return ans;
    }
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> res(m+1, 0);
        int ans = INT_MIN;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(matrix[i][j] == '1') res[j] = res[j] + 1;
                else res[j] = 0;
            }
            ans = max(ans, maxAreaHistogram(res, m));
        }
        return ans;
    }
};
