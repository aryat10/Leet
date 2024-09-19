class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int totSum = 0;

        
        for (int i = 0; i < n; i++) {
            totSum += nums[i];
        }

        
        if (totSum % 2 != 0) return false;

        int target = totSum / 2;

        
        vector<bool> prev(target + 1, 0);
        prev[0] = true;

        if (nums[0] <= target) prev[nums[0]] = true;

        for (int ind = 1; ind < n; ind++) {
            vector<bool> cur(target + 1, 0);
            cur[0] = true; 
            for (int t = 1; t <= target; t++) {
                bool notTake = prev[t];
                bool take = false;
                if (nums[ind] <= t) take = prev[t - nums[ind]];
                cur[t] = take || notTake;
            }

            prev = cur;
        }

        
        return prev[target];
    }
};
