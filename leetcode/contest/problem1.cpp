// You are given a 0-indexed array nums of distinct integers. You want to rearrange the elements in the array such that every element in the rearranged array is not equal to the average of its neighbors.

// More formally, the rearranged array should have the property such that for every i in the range 1 <= i < nums.length - 1, (nums[i-1] + nums[i+1]) / 2 is not equal to nums[i].

// Return any rearrangement of nums that meets the requirements.

vector<int> rearrange(vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    int avg = sum / n;
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        if (nums[i] == avg) {
            continue;
        }
        ans.push_back(nums[i]);
    }
    for (int i = 0; i < n; i++) {
        if (nums[i] == avg) {
            continue;
        }
        ans.push_back((nums[i] + avg) / 2);
    }
    return ans;
}