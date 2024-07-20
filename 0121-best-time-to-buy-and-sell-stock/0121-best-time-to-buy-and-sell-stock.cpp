class Solution {
public:
    int maxProfit(vector<int>& prices) {
       
        int mini = prices[0];
        int maxpro = 0;
        int cost;

        for (int i = 1; i < prices.size(); i++) {
            cost = prices[i] - mini;
            maxpro = max(maxpro, cost);
            mini = min(mini, prices[i]);
        }

        return maxpro;
    }
};
