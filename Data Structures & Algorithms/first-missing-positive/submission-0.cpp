class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map <int, int> mp;
        for(auto x : nums){
            mp[x] += 1;
        }
        int i = 1;
        while(true){
            if(mp[i] == 0)return i;
            i += 1;
        }
        return -1;
    }
};