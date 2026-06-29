class Solution {
public:

    set <vector<int>> ans;
    
    void solve(int n, int k, vector<int> &dummy, vector<int> &v, int i){
        
        if(dummy.size() == k){
            ans.insert(dummy);
        }
        if(dummy.size() > k || i >= v.size()){
            return;
        }

        dummy.push_back(v[i]);
        solve(n, k, dummy, v, i + 1);
        dummy.pop_back();
        solve(n, k, dummy, v, i + 1);
    }

    vector<vector<int>> combine(int n, int k) {
        vector <int> dummy, v;
        for(int i = 1; i <= n; i++){
            v.push_back(i);
        }
        solve(n, k, dummy, v, 0);
        vector <vector<int>> ret(ans.begin(), ans.end());
        return ret;
    }
};