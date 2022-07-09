class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        deque<int>q;
        int n = nums.size();
        vector<int>dp(n);
        dp[n-1] = nums[n-1];
        q.push_back(n-1);
        for(int i=n-2;i>=0;i--)
        {
            if(q.front()-i > k) q.pop_front();
            dp[i] = nums[i]+dp[q.front()];
            while(q.size() && dp[q.back()]<dp[i]) q.pop_back();
            q.push_back(i);
        }
        return dp[0];
    }
};