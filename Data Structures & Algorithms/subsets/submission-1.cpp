class Solution {
public:

    vector <vector<int>> ans;

    void solve(vector <int> &dummy, vector<int> &nums, int i){
        if(i == nums.size()){
            ans.push_back(dummy);
            return;
        }

        dummy.push_back(nums[i]);
        solve(dummy, nums, i + 1);
        dummy.pop_back();
        solve(dummy, nums, i + 1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector <int> dummy;
        solve(dummy, nums, 0);
        return ans;
    }
};
