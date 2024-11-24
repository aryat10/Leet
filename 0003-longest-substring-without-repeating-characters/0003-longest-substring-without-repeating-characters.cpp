class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int hash[256] = {0}; // Array to track the last index of each character
        int l = 0, r = 0, mLen = 0; // Initialize pointers and maximum length

        while (r < s.size()) {
            // If the character is already part of the substring
            if (hash[s[r]] > 0 && hash[s[r]] >= l + 1) {
                l = hash[s[r]]; // Move the left pointer
            }
            
            // Update the maximum length
            mLen = max(mLen, r - l + 1);

            // Update the last occurrence of the current character
            hash[s[r]] = r + 1; // Store index + 1 to distinguish between initialized 0 and valid indices
            r++; // Move the right pointer
        }

        return mLen;
    }
};
