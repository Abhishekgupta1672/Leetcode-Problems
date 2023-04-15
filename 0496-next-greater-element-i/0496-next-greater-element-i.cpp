class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        unordered_map<int ,int>mp;
        stack<int>st;
        for(int i=m-1;i>=0;i--)
        {
            if(!st.empty())
            {
                while(!st.empty() && st.top()<nums2[i])
                    st.pop();
                if(st.empty())
                    mp[nums2[i]]=-1;
                else
                {
                    mp[nums2[i]] = st.top();
                }
            }
            if(i==m-1)
                mp[nums2[i]]=-1;
            st.push(nums2[i]);
        }
        vector<int>v;
        for(auto i:nums1)
        {
            v.push_back(mp[i]);
        }
        return v; 
    }
};