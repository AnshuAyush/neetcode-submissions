class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
        int j = 0;
        string ans = "";
        bool  move = true;
        while(i < word1.size() && j < word2.size()){
            if(move == true){
                ans += word1[i];
                i += 1;
                move = false;
            }
            else{
                ans += word2[j];
                j += 1;
                move = true;
            }
        }
        while(i < word1.size()){
            ans += word1[i];
            i += 1;
        }
        while(j < word2.size()){
            ans += word2[j];
            j += 1;
        }
        return ans;
    }
};