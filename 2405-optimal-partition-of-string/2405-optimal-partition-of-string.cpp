class Solution {
public:
    int partitionString(string s) {
        set<char>st;
        int ans = 1;
        for(int i=0;i<s.size();i++){
            if(st.find(s[i])==st.end()) st.insert(s[i]);
            else{
                st.clear();
                ans++;
                st.insert(s[i]);
            }
        }
        return ans;
    }
};