class Solution {
public:
    bool check(unordered_map <char, int> &mp, unordered_map <char, int> &mp_t){
        for(auto it = mp_t.begin(); it != mp_t.end(); it++){
            if(it->second > mp[it->first])return false;
        }
        return true;
    }

    string getSubstr(int i, int j, string &s){
        string ans = "";
        for(int k = i; k <= j; k++){
            ans += s[k];
        }
        return ans;
    }
    string minWindow(string s, string t) {
        
        int i = 0;
        int j = 0;
        unordered_map <char, int> mp;
        unordered_map <char, int> mp_t;
        for(auto x : t){
            mp_t[x] += 1;
        }
        int start = 0;
        int end = 0;
        int c = INT_MAX;
        while(j < s.size()){
            mp[s[j]] += 1;
            while(check(mp, mp_t)){
                if(j - i + 1 <= c){
                    c = j - i + 1;
                    start = i; end = j;
                }
                mp[s[i]] -= 1;
                if(mp[s[i]] == 0)mp.erase(s[i]);
                i += 1;
            }

            j += 1;
        }
        if(c == INT_MAX)return "";
        return getSubstr(start, end, s);
    }
};
