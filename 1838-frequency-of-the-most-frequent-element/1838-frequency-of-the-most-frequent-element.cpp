class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end()); // Sort the array
        long l = 0, tot = 0, res = 0;
        
        for (long r = 0; r < nums.size(); r++) {
            tot += nums[r]; // Add the current element to the total sum
            
            // Check if the current window can be converted to nums[r] using k operations
            while ((nums[r] * (r - l + 1)) > (tot + k)) {
                tot -= nums[l]; // Shrink the window from the left
                l++;
            }
            
            // Update the result with the size of the valid window
            res = max(res, r - l + 1);
        }
        
        return res;
    }
};
