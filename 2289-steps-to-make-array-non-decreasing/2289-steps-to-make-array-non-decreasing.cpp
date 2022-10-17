class Solution {
public:
    int totalSteps(vector<int>& nums) {
        int n = nums.size();
        stack<pair<int,int>>st;
        int ans = 0 , cnt;
        st.push(make_pair(nums[n-1],0));
        for(int i=n-2;i>=0;i--){
            cnt = 0;
            while(!st.empty() && nums[i]>st.top().first){
                cnt = max(cnt+1,st.top().second);
                st.pop();
            }
            ans = max(ans,cnt);
            st.push(make_pair(nums[i],cnt));
        }
        return ans;
    }
};