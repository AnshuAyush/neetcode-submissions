class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector <int> prefix;
        vector <int> suffix(nums.size(), 0);

        long long prod = 1;

        for(int i = 0; i < nums.size(); i++){
            prod = prod * nums[i];
            prefix.push_back(prod);
        }
        prod = 1;
        for(int i = nums.size() - 1; i >= 0; i--){
            prod = prod * nums[i];
            suffix[i] = prod;
        }
        vector <int> ans;
        for(int i = 0; i < nums.size(); i++){
            if(i == 0){
                ans.push_back(suffix[i + 1]);
            }
            else if(i == nums.size() - 1){
                ans.push_back(prefix[i - 1]);
            }
            else{
                ans.push_back(prefix[i - 1] * suffix[i + 1]);
            }
        }
        return ans;
    }
};
