class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        map <char, int> mp;
        // abcabcbb
        int j = 0;
        int i = 0;
        while(j < s.size()){
            mp[s[j]] += 1;

            while(mp[s[j]] > 1){
                mp[s[i]] -= 1;
                if(mp[s[i]] == 0){
                    // mp.erase(s[i]);
                }
                i += 1;
            }

            ans = max(ans, j - i + 1);
            j += 1;

        }
        return ans;
    }
};
