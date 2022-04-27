/*
    use the concept of next smaller to left and next smaller to right
    and find the global maxima
*/


class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int> ans1, ans2;
        stack<int> st1, st2;
        int n = heights.size();
        for(int i=n-1;i>=0;i--) {
            while(!st1.empty() && heights[st1.top()] >= heights[i]) {
                st1.pop();
            }
            if(st1.empty()) {
                ans1.push_back(n-i);
            }
            else {
                ans1.push_back(st1.top() - i);
            }
            st1.push(i);
        }
        reverse(ans1.begin(), ans1.end());
        
        for(int i=0;i<n;i++) {
            while(!st2.empty() && heights[st2.top()] >= heights[i]) {
                st2.pop();
            }
            if(st2.empty()) {
                ans2.push_back(i+1);
            }
            else {
                ans2.push_back(i - st2.top());
            }
            st2.push(i);
        }
        
        int res = INT_MIN;
        for(int i=0;i<n;i++) {
            int temp = ans1[i] + ans2[i] - 1;
            res = max(res, temp*heights[i]);
        }
        
        return res;
    }
};
