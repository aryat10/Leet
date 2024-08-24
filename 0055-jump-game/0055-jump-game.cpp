class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxI = 0;  // maxI keeps track of the maximum index we can reach
        
        for (int i = 0; i < nums.size(); i++) {
            if (i > maxI) return false;  // If current index is beyond max reachable index, return false
            
            maxI = max(maxI, nums[i] + i);  // Update the maximum reachable index
            
            if (maxI >= nums.size() - 1) return true;  // Early exit if we can reach or exceed the last index
        }
        
        return true;  // If we complete the loop, the last index is reachable
    }
};
