class Solution {
public:
    vector<vector<int>> ans;

    void solve(vector<int>& nums, int idx,
               vector<int>& curr, int target) {

        if(target == 0) {
            ans.push_back(curr);
            return;
        }

        for(int i = idx; i < nums.size(); i++) {

            if(i > idx && nums[i] == nums[i-1])
                continue;

            if(nums[i] > target)
                break;

            curr.push_back(nums[i]);

            solve(nums, i + 1, curr, target - nums[i]);

            curr.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());

        vector<int> curr;

        solve(nums, 0, curr, target);

        return ans;
    }
};