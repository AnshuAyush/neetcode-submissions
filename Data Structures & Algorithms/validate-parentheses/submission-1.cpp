class Solution {
public:
    bool isValid(string s) {
       stack <char> st;

       for(auto x : s){
        if(x == '(' || x == '{' || x == '['){
            st.push(x);
        }
        else{
            if(x == ')'){
                if(st.size() && st.top() == '(')st.pop();
                else st.push(x);
            }
            if(x == '}'){
                if(st.size() && st.top() == '{')st.pop();
                else st.push(x);
            }
            if(x == ']'){
                if(st.size() && st.top() == '[')st.pop();
                else st.push(x);
            }
        }
       } 
       return st.size() == 0;
    }
};
