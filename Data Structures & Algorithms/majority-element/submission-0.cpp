class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        map <int, int> mp;

        for(auto x : nums){
            mp[x] += 1;
        }

        for(auto it = mp.begin(); it != mp.end(); it++){
            if(it->second > nums.size() / 2)return it->first;
        }
        return -1;
    }
};