class Solution {
public:
    vector<vector<int>> dir = {{0,1},{1,0},{0,-1},{-1,0}};

    int solve(vector<vector<int>>& grid, int i, int j) {
        grid[i][j] = 0;

        int area = 1;

        for (auto &d : dir) {
            int row = i + d[0];
            int col = j + d[1];

            if (row >= 0 && row < grid.size() && col >= 0 && col < grid[0].size() &&grid[row][col] == 1) {

                area += solve(grid, row, col);
            }
        }

        return area;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxArea = 0;

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 1) {
                    maxArea = max(maxArea, solve(grid, i, j));
                }
            }
        }

        return maxArea;
    }
};