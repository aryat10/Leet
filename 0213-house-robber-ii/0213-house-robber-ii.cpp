class Solution {
public:
    int robLinear(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];            // Base cases


        int prev1 = max(nums[0], nums[1]);
        int prev2 = nums[0];                   // express in index
        
        for (int i = 2; i < n; i++) {
            int current = max(prev1, prev2 + nums[i]);
            prev2 = prev1;
            prev1 = current;                   
        }
        return prev1;
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        if (n == 2) return max(nums[0], nums[1]);
        
        // Scenario 1: Rob from house 0 to house n-2
        vector<int> case1(nums.begin(), nums.end()-1);
        int maxCase1 = robLinear(case1);
        
        // Scenario 2: Rob from house 1 to house n-1
        vector<int> case2(nums.begin()+1, nums.end());
        int maxCase2 = robLinear(case2);
        
        // Return the maximum of the two scenarios
        return max(maxCase1, maxCase2);               // Return of max that can be returned 
    }
};
