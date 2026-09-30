class Solution {
public:

    bool dfs(vector <vector<int>> &adj, int node, vector<int> &vis, vector<int> &pathVis){

        vis[node] = 1;
        pathVis[node] = 1;
        for(int i = 0; i < adj[node].size(); i++){

            int currNode = adj[node][i];
           

            if(vis[currNode] == 0){
                bool k = dfs(adj, adj[node][i], vis, pathVis);
                if(!k)return false;
            }
            else if(pathVis[currNode] == 1)return false;
        }
        pathVis[node] = 0;
        return true;

    }
    bool canFinish(int n, vector<vector<int>>& nums) {
        
        vector<vector<int>> adj(n);
        vector <int> vis(n, 0);
        vector <int> pathVis(n, 0);
        for(int i = 0; i < nums.size(); i++){
            adj[nums[i][1]].push_back(nums[i][0]);
        }

        for(int i = 0; i < n; i++){
            bool k = dfs(adj, i, vis,pathVis);
            if(!k)return false;
        }
        return true;
    }
};