class Solution {
public:

    set<vector<int>> ans;

    void solve(int l, vector<int> &nums){
        
        if(l == nums.size()){
            ans.insert(nums);
            return;
        }
        for(int i = l; i < nums.size(); i++){
            swap(nums[l], nums[i]);
            solve(l + 1, nums);
            swap(nums[l], nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        solve(0, nums);
        vector<vector<int>>ret(ans.begin(), ans.end());
        return ret;
    }
};