class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {

        int n = gas.size();
        int a = 0;
        int b = 0;

        for(int i = 0; i < n; i++){
            a += gas[i];
            b += cost[i];
        }   
        if(a < b)return -1;

        int res = 0;
        int total = 0;
        for(int i = 0; i < n; i++){
            total += gas[i] - cost[i];
            if(total < 0){
                total = 0;
                res = i + 1;
            }
        }
        return res;
    }
};
