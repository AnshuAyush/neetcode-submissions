class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        map <int, int> mp;
        mp[5] = 0;  // 5 - 2
        mp[10] = 0; // 10 - 1
        mp[20] = 0; // 
        for(auto x : bills){
            if(x == 5){
                mp[x] += 1;
            }
            else if(x == 20){
                if(mp[10] >= 1 && mp[5] >= 1){
                    mp[10] -=1;
                    mp[5] -= 1;
                    continue;
                }
                if(mp[5] >= 3){
                    mp[5] -= 3;
                    continue;
                }
                return false;
            }
            else{
                if(mp[x - 5] == 0)return false;
                mp[x] += 1;
                mp[x - 5] -= 1;
            }
            
        }
        return true;
    }
};