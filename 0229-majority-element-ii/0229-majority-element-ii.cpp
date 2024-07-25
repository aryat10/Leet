class Solution {
public:
    vector<int> majorityElement(vector<int> &nums) {
	
	vector<int>vec;
	map<int,int>mp;
	int min = (int)nums.size()/3 + 1;

	for(int i = 0;i<nums.size();i++){
		mp[nums[i]]++;
		if(mp[nums[i]]==min)
		vec.push_back(nums[i]);
		if(vec.size()==2)
		break;
	}
	
	sort(vec.begin(),vec.end());
	return vec;
}
};