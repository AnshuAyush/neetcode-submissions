class Solution {
public:
    bool isAnagram(string s, string t) {
        map <char, int> mp1;
        map <char, int> mp2;

        if(s.size() != t.size())return false;
        for(int i = 0; i < s.size(); i++){
            mp1[s[i]] += 1;
            mp2[t[i]] += 1;
        }
        return mp1 == mp2;
    }
};
