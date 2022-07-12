class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& nums) {
        if(nums[0][0]==1) return 0;
        int m = nums.size();
        int n = nums[0].size();
        vector<vector<int>>dp(m,vector<int>(n));
        dp[0][0] = 1;
        for(int i=1;i<n;i++)
        {
            dp[0][i] = (nums[0][i]==0 && dp[0][i-1]==1)?1:0;
        }
        for(int j=1;j<m;j++)
        {
            dp[j][0] = (nums[j][0]==0 && dp[j-1][0]==1)?1:0;
        }
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(nums[i][j]==0)
                    dp[i][j] = dp[i-1][j]+dp[i][j-1];
                else
                    dp[i][j]=0;
            }
        }
        return dp[m-1][n-1];
    }
};