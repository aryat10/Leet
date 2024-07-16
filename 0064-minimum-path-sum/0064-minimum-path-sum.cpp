class Solution {
public:
    int func(int i, int j, const std::vector<std::vector<int>>& grid, std::vector<std::vector<int>>& dp) {
        if (i == 0 && j == 0) return grid[i][j];
        if (i < 0 || j < 0) return INT_MAX;
        if (dp[i][j] != -1) return dp[i][j];

        int up = (i > 0) ? func(i - 1, j, grid, dp) : INT_MAX;
        int left = (j > 0) ? func(i, j - 1, grid, dp) : INT_MAX;
        
        if (up != INT_MAX) up += grid[i][j];
        if (left != INT_MAX) left += grid[i][j];

        return dp[i][j] = std::min(up, left);
    }

    int minPathSum(std::vector<std::vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        std::vector<std::vector<int>> dp(n, std::vector<int>(m, -1));
        return func(n - 1, m - 1, grid, dp);
    }
};