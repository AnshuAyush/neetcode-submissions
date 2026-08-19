class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        map <int, vector<int>> mp;
        for(int i = 0; i < mat.size(); i++){
            mp[i] = mat[i];
        }
        int c = 0;
        for(int j = mat.size() - 1; j >= 0;  j--){
            vector <int> v = mp[c];
            for(int i = 0; i < mat.size(); i++){
                mat[i][j] = v[i];
            }
            c += 1;
        }
        
    }
};
