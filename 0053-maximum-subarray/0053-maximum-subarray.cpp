class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int start=0, end=nums.size()-1;
        int maxi=INT_MIN,temp=0;
        for(int i=start; i<=end; i++){
            temp+=nums[i];
            if(temp > maxi){
                maxi = temp;
            }
            if(temp < 0){
                temp=0;
            }
        }
        return maxi;
    }
};