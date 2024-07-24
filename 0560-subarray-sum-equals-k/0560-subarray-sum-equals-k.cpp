class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        // Write Your Code Here
        unordered_map<int, int> ump;
        ump[0] = 1;
        int pSum = 0;
        int cnt = 0;

        for (int i = 0; i < arr.size(); i++) {
            pSum += arr[i];
            int mov = pSum - k;
            cnt += ump[mov];
            ump[pSum] += 1;
        }

        return cnt;
    }
};