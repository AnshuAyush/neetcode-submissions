class Solution {
public:
    // ans = 3
    //          m
    //        l h
    //  0 1 2 3 4 5      
    // -1 0 2 4 6 8
    int searchInsert(vector<int>& nums, int target) {
        

        int ans = nums.size();
        int low = 0;
        int high = nums.size() -1;
        
        while(low <= high){
            int mid = (low + high) /2;

            if(nums[mid] == target)return mid;
            if(nums[mid] >= target){
                ans = mid;
                high = mid - 1;
            }
            else if(nums[mid] <= target){
                low = mid + 1;
            }
        }
        return ans;
    }
};