class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        //pre processing
        unordered_map<int, int> index;
        for(int i=0;i<n2;i++) {
            index[nums2[i]] = i;
        }
        
        vector<int> ans;
        for(int i=0;i<n1;i++) {
            int temp = -1;
            int tempI = index[nums1[i]];
            
            for(int j=tempI + 1;j<n2;j++) {
                if(nums2[j] > nums2[tempI]) {
                    temp = nums2[j];
                    break;
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
