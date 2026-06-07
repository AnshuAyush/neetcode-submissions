class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map <int, int> mp;
        int n = nums.size() / 3;
        vector <int> ans;
        for(auto x : nums){
            mp[x] += 1;
        }

        for(auto it = mp.begin(); it != mp.end(); it++){
            if(it->second > n){
                ans.push_back(it->first);
            }
        }
        return ans;
    }
};