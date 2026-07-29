class Solution {
public:

    void dfs(vector<vector<int>> &adj, vector<int> &vis, int node){
        vis[node] = 1;

        for(int i = 0; i < adj[node].size(); i++){
            if(vis[adj[node][i]] == 0){
                dfs(adj, vis, adj[node][i]);
            }
        }
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        vector <int> vis(n, 0);
        vector <vector<int>> adj(n);

        for(int i = 0; i < edges.size(); i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(vis[i] == 0){
                ans += 1;
                dfs(adj, vis, i);
            }
        }
        return ans;
    }
};
