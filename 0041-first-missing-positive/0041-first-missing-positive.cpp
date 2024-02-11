class Solution {
public:
   int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        while (i < n) {
            if (nums[i] == i + 1) {
                i++; // if element is equal to index + 1 , then it is already at right position , go ahead .
                continue;
            }
            if (nums[i] <= 0 || nums[i] > n) {
                i++;  // if not in range, not useful element go ahead , it will dismatch its corresponding index and can be our ans.
                continue;
            }
            int idx1 = i;            // index we are standing at .
            int idx2 = nums[i] - 1;    // index where should this number must be present.
            if (nums[idx1] == nums[idx2]) {
                i++;                   // if same element is present at both index it will perform infinite swaps , so continue.
                continue;
            }
            swap(nums[idx1], nums[idx2]);// swapped element so it must be at its right position (corresponding index[0-based]).
        }
        for (int j = 0; j < n; j++) {
            if (nums[j] != j + 1) {  // Simply check if element doesnot match corresponding index , return it
                return j + 1;
            }
        }
        return n + 1; // if all elements are present and at its cor-responding index , return n+1(element next after range ends)
    }
};