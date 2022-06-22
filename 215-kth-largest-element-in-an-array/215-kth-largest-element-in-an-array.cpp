class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        stack<int>st;
        sort(nums.begin() , nums.end());
        for(auto x:nums)
            st.push(x);
        k--;
        while(k--)
            st.pop();
        return st.top();
    }
};