class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int target = 0;
        set <vector<int>> ans;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++){
            int j = i + 1;
            int k = nums.size() - 1;
            

            while(j < k){
                if(nums[i] + nums[j] + nums[k] > target){
                    k -= 1;
                }
                else if(nums[i] + nums[j] + nums[k] < target){
                    j += 1;
                }
                else if(nums[i] + nums[j] + nums[k] == target){
                    ans.insert({nums[i], nums[j] , nums[k]});
                    j += 1;
                    k -= 1;
                }
            }
        }
        vector <vector<int>> ret(ans.begin(), ans.end());
        return ret;
    }
};
