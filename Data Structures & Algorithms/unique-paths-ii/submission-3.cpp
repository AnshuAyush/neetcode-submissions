class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        // 0 0 0  1 1 1
        // 0 0 0  1
        // 0 1 0  1
        if(grid[0][0] == 1) return 0;
        
        vector <vector<int>> mat(grid.size(), vector<int>(grid[0].size(), 0));
        mat[0][0] = 1;
        for(int i = 1; i < grid[0].size(); i++){
            if(grid[0][i] == 0){
                mat[0][i] = mat[0][i - 1];
            }
        }
        for(int i = 1; i < grid.size(); i++){
            if(grid[i][0] == 0){
                mat[i][0] = mat[i - 1][0];
            }
            else{
                mat[i][0] = 0;
            }
        }
        for(int i = 1; i < grid.size(); i++){
            for(int j = 1; j < grid[0].size(); j++){
                if(grid[i][j] == 1){
                    mat[i][j] = 0;
                }
                else{
                    mat[i][j] = mat[i - 1][j] + mat[i][j - 1];
                }
            }
        }

        return mat[mat.size()  - 1][mat[0].size() - 1];
        
    }
};