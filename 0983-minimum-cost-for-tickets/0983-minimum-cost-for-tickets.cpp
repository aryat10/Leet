class Solution {
public:
    int func(int n, vector<int>& days, vector<int>& costs, int index, vector<int>& dp) {
        if (index >= n)
            return 0;
        if (dp[index] != -1)
            return dp[index];
        
        int pass1 = costs[0] + func(n, days, costs, index + 1, dp);  // for finding out toatal cost on 1 day pass 
        
        int i;
        for (i = index; i < n && days[i] < days[index] + 7; i++);
        int pass7 = costs[1] + func(n, days, costs, i, dp);   // for finding out toatal cost on 7 day pass 
        
        for (i = index; i < n && days[i] < days[index] + 30; i++);
        int pass30 = costs[2] + func(n, days, costs, i, dp);     // for finding out toatal cost on 30 day pass 
        
        dp[index] = min(pass1, min(pass7, pass30));
        return dp[index];                    // we need to return minimum of ticket cost which can be used 
    }

    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n = days.size();
        vector<int> dp(n + 1, -1);
        return func(n, days, costs, 0, dp);
    }
};
