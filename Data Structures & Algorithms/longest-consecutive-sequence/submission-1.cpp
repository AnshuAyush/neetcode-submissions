class Solution {
public:
    int longestConsecutive(vector<int>& v) {
        if(v.size() == 0)return 0;
        map <int, int> mp;
        vector <int> nums;
        int ans = 1;
        for(int i = 0; i < v.size(); i++){
            mp[v[i]] += 1;
        }
        for(auto x : mp){
            nums.push_back(x.first);
        }

        int i = 0;
        // 2 3 4 5 10 20
        while(i < nums.size() - 1){
            int curr = 1;
            while(i < nums.size() - 1 && nums[i] + 1 == nums[i + 1]){
                curr += 1;
                i += 1;
            } 
            ans = max(ans, curr);
            i += 1;
        }
        return ans;
    }
};
