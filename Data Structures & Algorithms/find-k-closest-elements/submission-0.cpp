class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        // arr =  2 4 5 8 
        // diff = 4 2 1 2

        // 4 -> 2
        // 2 -> 4, 8
        // 1 -> 5 

        map <int, vector<int>> mp;

        for(auto curr : arr){
            int diff = abs(curr - x);
            mp[diff].push_back(curr);
        } 
        vector <int> ans;
        while(k){
            
            for(auto it = mp.begin(); it != mp.end(); it++){
                for(int i = 0; i < it->second.size(); i++){
                    ans.push_back(it->second[i]);
                    k -= 1;
                    if(k == 0){
                        sort(ans.begin(), ans.end());
                        return ans;
                    }
                }
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};