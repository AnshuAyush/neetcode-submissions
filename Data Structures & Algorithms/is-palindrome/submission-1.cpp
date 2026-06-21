class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;

        while(i < j){
            char a = tolower(s[i]);
            char b = tolower(s[j]);
            if(a != b){
                if(!isalnum(a)){
                    i += 1;
                }
                else if(!isalnum(b)){
                    j -= 1;
                }
                else {
                    return false;
                }
            }
            else{
                i += 1;
                j -= 1;
            }
        }
        return true;
    }
};
