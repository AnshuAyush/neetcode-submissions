class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       vector <int> prefix;
       vector <int> suffix(nums.size());
        if(nums.size() == 1)return 0;
       long long sum = 0;
        
        
       for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            prefix.push_back(sum);
       } 
       sum = 0;
       for(int i = nums.size() - 1; i >= 0; i--){
            sum += nums[i];
            suffix[i] = sum;
       }
        if(suffix[1] == 0)return 0;
        if(prefix[nums.size() - 2] == 0) return nums.size() - 1;

       for(int i = 1; i < nums.size() - 1; i++){
            if(prefix[i - 1] == suffix[i + 1])return i;
       }
       return -1;
    }
};