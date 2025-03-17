class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            int a = nums[i];
            int d = target - a;
            if(mpp.find(d)!=mpp.end())
            { 
                return {mpp[d],i};
            }
            
            mpp[a] = i;
            
        }
        
        return {-1,-1};
        
    }
};