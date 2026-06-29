class Solution {
public:
    vector <string> ans;
    void solve(int open, int close, int n,  string dummy){
        
        if(open == n && open == close){
            ans.push_back(dummy);
            return;
        }
        

        if(open < n){
            dummy += '(';
            solve(open + 1, close, n, dummy);
            dummy.pop_back();
        }
        if(close < open){
            dummy += ')';
            solve(open, close + 1, n, dummy);
        }
        else{
            dummy.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        solve(0, 0,n, "");
        return ans;
    }
};
