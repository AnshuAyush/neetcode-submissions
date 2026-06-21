class Solution {
public:

    vector <vector<int>> dir = {{0, 1}, {1, 0 }, {0, -1}, {-1, 0}};

    void solve(vector<vector<char>> &grid, int i, int j){
        grid[i][j] = '0';

        for(int k = 0; k < 4; k++){
            int row = i + dir[k][0];
            int col = j + dir[k][1];

            if(row >= 0 && row < grid.size() && col >= 0 && col < grid[0].size() && grid[row][col] == '1'){
                solve(grid, row, col);
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {

        int ans = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(grid[i][j] == '1'){
                    solve(grid,i, j);
                    ans += 1;
                }
            }
        }
        return ans;   
    }
};
