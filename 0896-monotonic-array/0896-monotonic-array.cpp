class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increasing = true; // Flag to check non-decreasing
        bool decreasing = true; // Flag to check non-increasing

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] < nums[i + 1]) {
                decreasing = false; // Not non-increasing
            }
            if (nums[i] > nums[i + 1]) {
                increasing = false; // Not non-decreasing
            }
        }

        return increasing || decreasing; // True if either condition holds
    }
};
