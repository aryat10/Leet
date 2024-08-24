class Solution {
public:
    int func(int ind, vector<int>& nums, vector<int>& dp) {
        if (ind >= nums.size() - 1) 
            return 0;  

        if (dp[ind] != -1) 
            return dp[ind];  

        int mini = INT_MAX;
        for (int i = 1; i <= nums[ind]; i++) {
            int jumps = func(ind + i, nums, dp);
            if (jumps != INT_MAX) {
                mini = min(mini, jumps + 1);  
            }
        }

        dp[ind] = mini;  
        return mini;
    }

    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);  
        return func(0, nums, dp);
    }
};
