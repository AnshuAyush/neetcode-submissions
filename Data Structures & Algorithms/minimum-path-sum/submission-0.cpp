class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> dp(grid.size(), vector<int>(grid[0].size(), 0));
        int curr = 0;
        for(int i = 0; i < grid[0].size(); i++){
            curr += grid[0][i];
            dp[0][i] = curr;
        }
        curr = 0;
        for(int i = 0; i < grid.size(); i++){
            curr += grid[i][0];
            dp[i][0] = curr;
        }
        for(int i = 1; i < dp.size(); i++){
            for(int j = 1; j < dp[0].size(); j++){
                dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
            }
        }
        return dp[dp.size() - 1][dp[0].size() - 1];
    }
};