class Solution {
public:
    bool canJump(vector<int>& nums) {
        int end = nums.size() - 1;

        for (int i = nums.size() - 2; i >= 0; i--) {
            if (i + nums[i] >= end) {
                end = i;
            }
        }

        return end == 0;        
    }
};