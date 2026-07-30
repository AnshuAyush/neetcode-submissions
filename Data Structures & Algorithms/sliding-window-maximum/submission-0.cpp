class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        map <int, int> mp;
        int i = 0;
        int j = 0;
        vector <int> ans;
        while(j < nums.size()){
            mp[nums[j]] += 1;
            while(j - i + 1 == k){
                auto it = --mp.end();
                ans.push_back(it->first);
                mp[nums[i]] -= 1;
                if(mp[nums[i]] == 0)mp.erase(nums[i]);
                i += 1;
            }
            j += 1;
        }
        return ans;
    }
};
