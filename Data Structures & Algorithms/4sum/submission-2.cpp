class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

       sort(nums.begin(), nums.end());
        set <vector<int>> ans;

       for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                int k = j + 1;
                int l = nums.size() - 1;
            
                while(k < l){
                     long long sum = 1LL * nums[i] + nums[j] + nums[k] + nums[l];
                    if(sum > target){
                        l -= 1;
                    }
                    else if(sum < target){
                        k += 1;
                    }
                    else{
                        ans.insert({nums[i], nums[j], nums[l], nums[k]});
                        k += 1;
                        l -= 1;
                    }
                }
            }
       } 
       vector <vector<int>> ret(ans.begin(), ans.end());
       return ret;
    }
};