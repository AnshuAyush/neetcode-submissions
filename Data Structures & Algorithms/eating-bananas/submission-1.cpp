class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        long long low = 1;
        long long high = *(max_element(piles.begin(), piles.end()));
        int ans = -1;
        while(low <= high){ 
            long long mid = (low + high) / 2;
            long  total_time = 0;
            for(auto x : piles){
                total_time += ceil((double)x / mid);
            }

            if(total_time <= h){
                ans = mid;
                high = mid - 1;
            }
            else if(total_time > h ){
                low = mid + 1;
            }
        }   
        return ans;
    }
};
