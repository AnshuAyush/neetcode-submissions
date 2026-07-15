class Solution {
public:
    int ans = INT_MAX;
    void solve(vector <int> &v, int i, int target, int curr, int mini){
        if(target == curr){
            ans = min(ans, mini);
            return;
        }
        if(target < curr )return;
        if(i >= v.size())return;

        curr += v[i];
        solve(v, i, target, curr, mini + 1);
        curr -= v[i];
        solve(v, i + 1, target, curr, mini );
    }
    int coinChange(vector<int>& coins, int amount) {
        solve(coins, 0, amount, 0, 0);
        if(ans == INT_MAX)return -1;
        return ans;
    }
};
