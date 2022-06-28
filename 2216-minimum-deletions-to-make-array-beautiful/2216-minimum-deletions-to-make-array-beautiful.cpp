class Solution {
public:
    int minDeletion(vector<int>& nums) {
        stack<int>st;
        int ans = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(st.size()%2==0)
                st.push(nums[i]);
            else
            {
                if(nums[i]==st.top())
                    ans++;
                else
                    st.push(nums[i]);
            }
        }
        return st.size()%2==0?ans:ans+1;
    }
};