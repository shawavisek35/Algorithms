class Solution{   
public:

    int upperBound(vector<int> row, int target) {
        int ans = -1;
        int i = 0;
        int j = row.size() - 1;
        while(i<=j) {
            int mid = i + (j-i)/2;
            if(row[mid] >= target) {
                ans = mid;
                j = mid - 1;
            }
            else {
                i = mid + 1;
            }
        }
        return ans != -1 ? ans : row.size();
    }
    int median(vector<vector<int>> &matrix, int r, int c){
        int medianInd = (r * c)/2;
        int res = -1;
        int i = 1;
        int j = 2000;
        while(i<=j) {
            int mid = i + (j-i)/2;
            int cnt = 0;
            for(auto row : matrix) {
                cnt += upperBound(row, mid);
            }
            if(cnt<=medianInd) {
                res = mid;
                i = mid + 1;
            }
            else {
                j = mid - 1;
            }
        }
        return res;
    }
};
