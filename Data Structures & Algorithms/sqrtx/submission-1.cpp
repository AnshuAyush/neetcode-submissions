class Solution {
public:
    int mySqrt(int x) {
        
        int low = 1;
        int high = x;
        int ans = 0;
        while(low <= high){
            long long  mid = (low + high) /2;
            long long prod = mid * mid;
            if(prod == x)return mid;

            else if(prod < x){
                ans = mid;
                low = mid + 1;
            }
            else if(prod > x){
                high = mid - 1;
            }
        }
        return ans;
    }
};