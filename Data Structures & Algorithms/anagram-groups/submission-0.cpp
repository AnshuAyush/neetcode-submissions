class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector <vector<string>> ans;

        map <string, vector<string>> mp;

        for(int i = 0; i < strs.size(); i++){
            string d = strs[i];
            sort(d.begin(), d.end());
            
            mp[d].push_back(strs[i]);
        }

        for(auto it = mp.begin(); it != mp.end(); it++){
            vector <string> dummy;
            for(int i = 0; i < it->second.size(); i++){
                dummy.push_back(it->second[i]);
            }
            ans.push_back(dummy);
        }
        return ans;
    }
};
