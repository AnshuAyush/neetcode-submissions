class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int i = 0;
        int j = 0;
        int curr = 0;
        int ans = INT_MAX;
        while(j < nums.size()){
            curr += nums[j];

            while(curr >= target){
                ans = min(ans, (j - i + 1));
                curr -= nums[i];
                i += 1;
            }
            j += 1;
        }
        return (ans == INT_MAX) ? 0 : ans;
    }
};