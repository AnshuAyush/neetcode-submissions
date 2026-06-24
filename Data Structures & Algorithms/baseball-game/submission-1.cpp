class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack <int> st;
        cout << stoi("-4");

        for(int i = 0; i < operations.size(); i++){
            if(st.size() && operations[i] == "C"){
                st.pop();
            }
            else if(operations[i] == "D"){
                int a = st.top();
                st.push(a * 2);
            }
            else if(st.size() >= 2 && operations[i] == "+"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(b);
                st.push(a);
                st.push(a + b);
            }
            else{
                st.push(stoi(operations[i]));
            }
        }

        int ans = 0;
        while(st.size() > 0){
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};