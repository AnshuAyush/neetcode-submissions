class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0;
        int one = 0;
        int two = 0;
        
        for(auto x : nums){
            if(x == 0)zero += 1;
            else if(x == 1)one += 1;
            else two += 1;
        }
        int idx = 0;
        for(int i = 0; i < zero; i++){
            nums[idx] = 0;
            idx += 1;
        }
        for(int i = 0; i < one; i++){
            nums[idx] = 1;
            idx += 1;
        }
        for(int i = 0; i < two ; i++){
            nums[idx] = 2;
            idx += 1;
        }
    }
};