class Solution {
public:

    bool dfs(vector <vector<int>> &adj, int node, vector<int> &vis){

        if(vis[node] == 1)return false;
        vis[node] = 1;
        
        for(int i = 0; i < adj[node].size(); i++){
                bool k = dfs(adj, adj[node][i], vis);
                if(k == false)return false;
            
        }
        vis[node] = 0;
        return true;

    }
    bool canFinish(int n, vector<vector<int>>& nums) {
        
        vector<vector<int>> adj(n);
        vector <int> vis(n, 0);

        for(int i = 0; i < nums.size(); i++){
            adj[nums[i][1]].push_back(nums[i][0]);
        }

        for(int i = 0; i < n; i++){
            bool k = dfs(adj, i, vis);
            if(!k)return false;
        }
        return true;
    }
};