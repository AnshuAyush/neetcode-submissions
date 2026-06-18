class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());

        int i = 0;
        int j = people.size() - 1;
        int ans = 0;

        while(i <= j){
            if(people[i] + people[j] <= limit){
                if(i == j){
                    ans += 1;
                    i += 1;
                    j -= 1;
                }
                else{
                    ans += 1;
                    i += 1;
                    j -= 1;
                }
                
            }
            else if(people[i] + people[j] > limit){
                ans += 1;
                j -= 1;
            }
        }
        return ans;
    }
};