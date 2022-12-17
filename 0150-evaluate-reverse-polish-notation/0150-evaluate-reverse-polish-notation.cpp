class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long>st;
        for(auto x:tokens){
            if(x=="*"){
                long long tp1 = st.top();
                st.pop();
                long long tp2 = st.top();
                st.pop();
                st.push(tp1*tp2);
            }
            else if(x=="+"){
                long long tp1 = st.top();
                st.pop();
                long long tp2 = st.top();
                st.pop();
                st.push(tp1+tp2);
            }
            else if(x=="-"){
                long long tp1 = st.top();
                st.pop();
                long long tp2 = st.top();
                st.pop();
                st.push(tp2-tp1);
            }
            else if(x=="/"){
                long long tp1 = st.top();
                st.pop();
                long long tp2 = st.top();
                st.pop();
                st.push(tp2/tp1);
            }
            else st.push(stoi(x));
        }
        return st.top();
    }
};