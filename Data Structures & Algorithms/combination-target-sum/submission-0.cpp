class Solution {
public:
    vector <vector<int>> ans;

    void solve(vector<int> &nums, int idx, vector <int> &dummy, int sum, int target){

        if(idx >= nums.size()){
            return;
        } 
        if(sum > target){
            return;
        }
        if(sum == target){
            ans.push_back(dummy);
            return;
        }
        dummy.push_back(nums[idx]);
        sum += nums[idx];
        solve(nums, idx, dummy, sum, target);
        sum -= nums[idx];
        dummy.pop_back();
        solve(nums, idx + 1, dummy, sum, target);

    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector <int> dummy;
        solve(nums, 0, dummy, 0, target);
        return ans;
    }
};


