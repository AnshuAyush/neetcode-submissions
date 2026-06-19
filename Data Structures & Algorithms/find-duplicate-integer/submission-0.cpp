class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // [1, 2, 3, 2, 2]
        // [1, 2, 3, 2, 2]

       for(int i = 0; i < nums.size(); i++) {

            int idx = abs(nums[i]);

            if(nums[idx] < 0) {
                return idx;
            }

            nums[idx] *= -1;
        }
        return -1;
    }
};
