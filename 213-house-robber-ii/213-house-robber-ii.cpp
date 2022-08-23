class Solution {
public:
    int maxele(vector<int>nums)
    {
        int n = nums.size();
        vector<int>dp(n);
        dp[0] = nums[0];
        if(nums.size()==1) return nums[0];
        dp[1] = max(nums[1],dp[0]);
        for(int i=2;i<n;i++)
        {
            dp[i] = max(dp[i-1] , nums[i]+dp[i-2]);
        }
        return dp[n-1];
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>tmp1,tmp2;
        if(nums.size()==1) return nums[0];
        for(int i=0;i<n;i++)
        {
            if(i != 0) tmp1.push_back(nums[i]);
            if(i != n-1) tmp2.push_back(nums[i]);
        }
        return max(maxele(tmp1),maxele(tmp2));
    }
};