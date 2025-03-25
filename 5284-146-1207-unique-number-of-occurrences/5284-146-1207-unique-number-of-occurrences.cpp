class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>ump;
        unordered_set<int>ust;

        for(int num : arr)
        {
            ump[num]++;
        }

        for(const auto&it : ump)
        {
            if(!ust.insert(it.second).second)
            return false;
        }

        return true;
    }
};