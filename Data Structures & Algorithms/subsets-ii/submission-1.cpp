class Solution {
public:

    set<vector<int>> ans;
    
    void solve(int idx, vector<int> &nums, vector<int> &dummy){

      
        if(idx >= nums.size()){
            // sort(dummy.begin(), dummy.end());
            ans.insert(dummy);
            return;
        }

        dummy.push_back(nums[idx]);
        solve(idx + 1, nums, dummy);
        dummy.pop_back();
        solve(idx + 1, nums, dummy);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector <int> dummy;
        sort(nums.begin(), nums.end());
        solve(0, nums, dummy);
        vector<vector<int>> ret(ans.begin(), ans.end());
        return ret;
    }
};
