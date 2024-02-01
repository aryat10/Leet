class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>vec;
        for(auto num : nums1)
        {
            vec.push_back(num);
        }
        for(auto num : nums2)
        {
            vec.push_back(num);
        }
        sort(vec.begin(),vec.end());
        int s = vec.size();
        return s%2?vec[s/2]:(vec[s/2-1]+vec[s/2])/2.0;
    }
};