class Solution {
public:

    int solve(int i, string s, set<string> se, vector <int> &dp){
        if(i == s.size())return 1;
        if(dp[i] != -1)return dp[i];
        
        string curr = "";
        for(int j = i; j < s.size(); j++){
            curr += s[j];
            if(se.count(curr)){
                if(solve(j + 1, s, se, dp)){
                    return dp[i] = 1;
                }
            }
        }
        dp[i] = 0;
        return 0;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        vector <int> dp(1000, -1);
        set <string> se(wordDict.begin(), wordDict.end());
        return solve(0, s, se, dp);
    }
};
