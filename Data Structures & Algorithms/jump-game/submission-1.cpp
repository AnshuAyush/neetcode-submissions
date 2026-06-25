class Solution {
public:

    bool solve(vector<int> &nums, int idx){
        if(idx >= nums.size())return false;

        if(idx == nums.size() -1)return true;

        if(nums[idx] == 0) return false;

        int prev = idx; // 1
        idx = idx + nums[idx]; // 1 + 2 = 3

        for(int i = prev + 1; i <= idx; i++){
            bool k = solve(nums, i);
            if(k)return true;
        }
        return false;
    }
    bool canJump(vector<int>& nums) {
        return solve(nums, 0);
    }
};
