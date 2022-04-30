class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i=0;
        int j=n-1;
        int ans = INT_MIN;
        while(i<j) {
            ans = max(ans, min(height[i], height[j])*(j-i));
            if(height[i] >= height[j]) {
                j--;
            }
            else {
                i++;
            }
        }
        return ans;
    }
};
