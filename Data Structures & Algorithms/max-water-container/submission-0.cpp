class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int i = 0;
        int j = heights.size() - 1;
        int ans = 0;
        while(i < j){
            ans = max(ans, min(heights[j], heights[i]) * (j - i));

            if(heights[i] < heights[j]){
                i += 1;
            }
            else{
                j -= 1;
            }
        }
        return ans;
    }
};
