class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map <char, int> mp1, mp2;
        for(auto x : s1){
            mp1[x] += 1;
        }

        int i = 0;
        int j = 0;
        while(j < s2.size()){
            mp2[s2[j]] += 1;
            while(j - i + 1 == s1.size()){
                if(mp1 == mp2)return true;
                mp2[s2[i]] -= 1;
                if(mp2[s2[i]] == 0)mp2.erase(s2[i]);
                
                i += 1;
            }
            
            j += 1;
        }
        return false;
    }
};
