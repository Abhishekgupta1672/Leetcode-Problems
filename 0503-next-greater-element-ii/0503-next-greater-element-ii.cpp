class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>st;
        vector<int>v;
        for(int i=nums.size()-1;i>=0;i--)
        {
            st.push(nums[i]);
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            while(!st.empty() && nums[i]>=st.top())
            {
                st.pop();
            }
            if(st.empty())
                v.push_back(-1);
            else
            {
                v.push_back(st.top());
            }
            st.push(nums[i]);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};