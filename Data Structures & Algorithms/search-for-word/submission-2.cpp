class Solution {
public:
    vector<vector<int>> dir = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

    bool solve(vector<vector<char>> &grid, int i, int j, string dummy, string word, vector<vector<int>> &vis){
        vis[i][j] = 1;
        dummy += grid[i][j];
        if(dummy == word)return true;
        for(int k = 0; k < 4; k++){
            int row = i + dir[k][0];
            int col = j + dir[k][1];
            if(row >= 0 && row < grid.size() && col >= 0 && col < grid[0].size() && vis[row][col] == 0){
                bool k = solve(grid, row, col, dummy, word, vis);
                if(k)return true;
            }
            
        }
        vis[i][j] = 0;
        dummy.pop_back();
        return false;
    }
    bool exist(vector<vector<char>>& grid, string word) {
        
        vector<vector<int>> vis(grid.size(), vector<int>(grid[0].size(), 0));
        
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(grid[i][j] == word[0]){
                   
                    bool k = solve(grid, i, j, "", word, vis);
                    if(k)return true;
                }
            }
        }
        return false;
    }
};
