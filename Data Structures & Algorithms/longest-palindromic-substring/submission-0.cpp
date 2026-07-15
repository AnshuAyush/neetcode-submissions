class Solution {
public:
    string longestPalindrome(string s) {
        
        string ans = "";
        int len = 0;

        for(int i = 0; i < s.size(); i++){
            
            int l = i;
            int r = i;

            while(l >= 0 && r < s.size() && s[l] == s[r]){
                int currLen = r - l + 1;
                if(currLen > len){
                    len = currLen;
                    ans = s.substr(l, currLen);
                }
                l -= 1; r += 1;
            }
            l = i; r = i + 1;
            while(l >= 0 && r < s.size() && s[l] == s[r]){
                int currLen = r - l + 1;
                if(currLen > len){
                    len = currLen;
                    ans = s.substr(l, currLen);
                }
                l -= 1; r += 1;
            }
        }
        return ans;
    }
};
