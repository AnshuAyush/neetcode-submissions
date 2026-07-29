class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector <int> ans; 
        int left = 0;
        int right = matrix[0].size() - 1;
        int up = 0;
        int down = matrix.size() - 1;
        int dir = 0;
        while(left <= right && up <= down){
            if(dir == 0){
                for(int i = left; i <= right; i++){
                    ans.push_back(matrix[up][i]);
                }
                up += 1;
            }
            if(dir == 1){
                for(int i = up; i <= down; i++){
                    ans.push_back(matrix[i][right]);
                }
                right -= 1;
            }
            if(dir == 2){
                for(int i = right; i >= left; i--){
                    ans.push_back(matrix[down][i]);
                }
                down -= 1;
            }
            if(dir == 3){
                for(int i = down; i >= up; i--){
                    ans.push_back(matrix[i][left]);
                }
                left += 1;
            }
            dir = (dir + 1) % 4;
        }
        return ans;
    }
};
