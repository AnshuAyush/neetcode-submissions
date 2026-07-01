class Solution {
public:

    bool helperFunction(vector<int>& arr, int days, int ans){
        int cnt = 1;
        int load = 0;
        int n = arr.size();
        for(int i = 0; i < n; i++){
            if(load + arr[i] > ans){
                cnt++;
                load = arr[i];
                if(load > ans){
                    return false;
                }
            }
            else{
                load += arr[i];
            }
        }
        return (cnt <= days);
    }
    int shipWithinDays(vector<int>& weights, int days) {
        
        int total_weight = 0;
        int maximum_weight_package = 0;
        for(auto x : weights){
            total_weight += x;
            maximum_weight_package = max(maximum_weight_package, x);
        }

        int low = maximum_weight_package;
        int high = total_weight;
        int ans = INT_MAX;
        while(low <= high){
            int mid = (low + high) / 2;
            if(helperFunction(weights, days, mid)){
                ans = min(ans, mid);
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};