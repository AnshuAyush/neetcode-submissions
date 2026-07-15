class Solution {
public:
    int countSubstrings(string s) {
        
        int ans = 0;
        for(int i = 0; i < s.size(); i++){

            int l = i; int r = i;
            while(l >= 0 && r < s.size() && s[l] == s[r]){
                ans += 1;
                l -= 1;
                r += 1;
            }
            l = i; r = i + 1;
            while(l >= 0 && r < s.size() && s[l] == s[r]){
                ans += 1;
                l -= 1;
                r += 1;
            }
        }
        return ans;
    }
};
