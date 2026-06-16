class Solution {
public:
        int maxProfit(vector<int>& prices) {
        // prices       10,1,5,6,7,1
        // max_suffix = 10 7 7 7 7 1
        
        vector <int> max_suffix(prices.size(), 0);
        int maxi = INT_MIN;

        for(int i = prices.size() - 1; i >= 0; i--){
            maxi = max(prices[i], maxi);
            max_suffix[i] = maxi;
        }
        int ans = 0;
        // for(int i = 0; i < max_suffix.size(); i++){
        //     cout << max_suffix[i] << " ";
        // }
        for(int i = 0; i < prices.size() - 1; i++){
            if(max_suffix[i] - prices[i] > 0){
                ans = max(ans, max_suffix[i] - prices[i] );
            }
        }
        return ans;
    }
};
