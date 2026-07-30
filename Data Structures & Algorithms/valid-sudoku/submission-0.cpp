class Solution {
public:
    bool check(int row1, int row2, int col1, int col2, vector<vector<char>>& board){
        
        map <int, int> mp;
        for(int i = row1; i <= row2; i++){
            for(int j = col1; j <= col2; j++){
                if(board[i][j] == '.')continue;
                mp[board[i][j] - '0'] += 1;
            }
        }
        for(auto it = mp.begin(); it != mp.end(); it++){
            if(it->second > 1)return false;
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i = 0; i < 9; i++){
            map <int, int> mp;
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.')continue;
                mp[board[i][j] - '0'] += 1;
            }
            for(auto it = mp.begin(); it != mp.end(); it++){
                if(it->second > 1)return false;
            }
        }
        for(int j = 0; j < 9; j++){
             map <int, int> mp;
            for(int i = 0; i < 9; i++){
                if(board[i][j] == '.')continue;
                mp[board[i][j] - '0'] += 1;
            }
            for(auto it = mp.begin(); it != mp.end(); it++){
                if(it->second > 1)return false;
            }
        }

        if(!check(0, 2, 0, 2, board))return false;
        if(!check(0, 2, 3, 5, board))return false;
        if(!check(0, 2, 6, 8, board))return false;
        if(!check(3, 5, 0, 2, board))return false;
        if(!check(3, 5, 3, 5, board))return false;
        if(!check(3, 5, 6, 8, board))return false;
        if(!check(6, 8, 0, 2, board))return false;
        if(!check(6, 8, 3, 5, board))return false;
        if(!check(6, 8, 6, 8, board))return false;
            
        return true;
    }
};
