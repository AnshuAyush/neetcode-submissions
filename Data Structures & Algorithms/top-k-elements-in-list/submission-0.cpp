class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map <int, int> mp;
        for(auto x : nums){
            mp[x] += 1;
        }

        vector <vector<int>> v;
        for(auto it = mp.begin(); it != mp.end(); it++){
            v.push_back({it->second, it->first});
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        
        vector <int> ans;
        int idx = 0;
        while(k){
            ans.push_back(v[idx][1]);
            idx += 1;
            k -= 1;
        }
        return ans;
    }
};
