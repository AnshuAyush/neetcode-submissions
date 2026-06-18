class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> mp;
        mp[0] = 1;
        int prefix = 0;
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            prefix += nums[i];

            if(mp.count(prefix - k)){
                ans += mp[prefix - k];
            }
            mp[prefix] += 1;
        }
        return ans;
    }
};