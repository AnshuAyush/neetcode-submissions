class Solution {
public:
    vector <vector<int>> dir ={{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

    void dfs(vector<vector<char>> &grid, int i, int j){
        grid[i][j] = '.';

        for(int k = 0; k < 4; k++){
            int row = dir[k][0] + i;
            int col = dir[k][1] + j;
            
            if(row >= 0 && row < grid.size() && col >= 0 && col < grid[0].size() && grid[row][col] == 'O'){
                dfs(grid, row, col);
            }
        }
    }
    void solve(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(i == 0 || j == 0 || i == row - 1 || j == col - 1){
                    // cout << i << " " << j << ", "; 
                    if(grid[i][j] == 'O'){
                        dfs(grid, i, j);
                    }
                }
            }
        }
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(grid[i][j] == '.')grid[i][j] = 'O';
                else grid[i][j] = 'X';
            }
        }   
    }
};
