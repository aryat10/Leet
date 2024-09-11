class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        vector<int> vec;
        for (int i = 0; i < nums.size(); i++) {
            vec.push_back(abs(nums[i]));
        }

        auto it = min_element(vec.begin(), vec.end()); 
        int clo = *it; 

        int res = INT_MIN;  //represents the smallest possible value an integer can have

        for (int i = 0; i < nums.size(); i++) {
            if (abs(nums[i]) == clo) {
                res = max(res, nums[i]); 
            }
        }
        return res;
    }
};
