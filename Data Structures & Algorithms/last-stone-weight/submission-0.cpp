class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        priority_queue <int> pq;

        for(auto x : stones){
            pq.push(x);
        }

        while(pq.size() >= 2){
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            if(a - b != 0){
                pq.push(a - b);
            }
        }
        if(pq.size() == 0)return 0;
        return pq.top();
    }
};
