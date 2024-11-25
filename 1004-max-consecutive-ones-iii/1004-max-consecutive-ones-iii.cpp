class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int mLen = 0; // Maximum length
        int l = 0, r = 0; // Two pointers
        int zerCnt = 0; // Count of zeros in the window

        while (r < nums.size()) {
            if (nums[r] == 0) {
                zerCnt++;
            }

            // Shrink the window if the number of zeros exceeds k
            while (zerCnt > k) {
                if (nums[l] == 0) {
                    zerCnt--;
                }
                l++;
            }

            // Update the maximum length
            mLen = max(mLen, r - l + 1);
            r++; // Move the right pointer
        }

        return mLen;
    }
};
