class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map <int, int> mp;

        for(auto x : nums){
            if(mp[x] > 0)return true;
            mp[x] += 1;
        }
        return false;
    }
};