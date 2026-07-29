class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        map <int, int> rowMp;
        map <int, int> colMp;

        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[0].size(); j++){
                if(matrix[i][j] == 0){
                    rowMp[i] += 1;
                    colMp[j] += 1;
                }
            }
        }
        for(auto it = rowMp.begin(); it != rowMp.end(); it++){
            int row = it->first;
            for(int i = 0; i < matrix[row].size(); i++){
                matrix[row][i] = 0;
            }
        }
        for(auto it = colMp.begin(); it != colMp.end(); it++){
            int col = it->first;
            for(int i = 0; i < matrix.size(); i++){
                matrix[i][col] = 0;
            }
        }
    }
};
