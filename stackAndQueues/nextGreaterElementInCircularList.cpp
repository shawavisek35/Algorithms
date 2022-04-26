class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans;
        stack<int> st, st2;
        int n = nums.size();
        
        for(int i = n-1;i>=0;i--) {
            st2.push(nums[i]);
        }
        
        for(int i=n-1;i>=0;i--) {
            while(!st.empty() && st.top() <= nums[i]) {
                st.pop();
            }
            if(st.empty()) {
                while(!st2.empty() && st2.top() <= nums[i]) {
                    st2.pop();
                }
                st2.empty() ? ans.push_back(-1) : ans.push_back(st2.top());
            }
            else {
                ans.push_back(st.top());
            }
            st.push(nums[i]);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
