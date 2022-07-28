class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int>st;
        for(auto X:nums)
            st.insert(X);
        int i=1;
        while(st.find(i) != st.end())
            i++;
        return i;
    }
};