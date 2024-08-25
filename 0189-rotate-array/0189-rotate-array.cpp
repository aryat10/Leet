class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // Handle cases where k is greater than the size of the array
        reverse(nums.begin(), nums.end()); // Step 1
        reverse(nums.begin(), nums.begin() + k); // Step 2
        reverse(nums.begin() + k, nums.end()); // Step 3
    }
};
