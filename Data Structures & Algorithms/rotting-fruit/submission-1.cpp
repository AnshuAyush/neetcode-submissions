class Solution {
public:
    vector <vector<int>> dir = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    int orangesRotting(vector<vector<int>>& grid) {
        int fresh = 0;
        queue <vector<int>> q;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(grid[i][j] == 2){
                    q.push({i, j});
                }
                else if(grid[i][j] == 1){
                    fresh += 1;
                }
            }
        }   
        if(fresh == 0)return 0;

        int ans = -1;
        while(q.size()){ // source
            int size = q.size(); 
            while(size--){ // current level;
                vector <int> v = q.front(); q.pop();
                int i = v[0]; int j = v[1];

                for(int k = 0; k < 4; k++){ // exploring neighbour
                    int row = i + dir[k][0];
                    int col = j + dir[k][1];
                    
                    if(row >= 0 && row < grid.size() && col >= 0 && col < grid[0].size() && grid[row][col] == 1){
                        fresh -= 1;
                        grid[row][col] = 2;
                        q.push({row, col});
                        
                    }
                }
             
            }
            ans += 1;
        }
        if(fresh == 0)return ans;
        return -1;
    }
};
