class Solution {
public:
    int minDeletions(string s) {
        vector<int>v(26,0);
        for(char x : s)
            v[x-'a']++;
        int deletecnt = 0;
        unordered_set<int>st;
        for(int i=0;i<26;i++)
        {
            while(v[i] && st.find(v[i])!=st.end())
            {
                v[i]--;
                deletecnt++;
            }
            st.insert(v[i]);
        }
        return deletecnt;
    }
};