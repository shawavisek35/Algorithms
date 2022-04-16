class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        int n = nums.size();
        int i=0;
        int j=0;
        deque<int> q;
        while(j<n) {
            int temp = nums[j];
            while(!q.empty() && temp > q.back()) {
                q.pop_back();
            }
            q.push_back(temp);
            if(j-i+1 >= k) {
                ans.push_back(q.front());
                if(q.front() == nums[i]) {
                    q.pop_front();
                }
                i++;
            }
            j++;
        }
        return ans;
    }
};
