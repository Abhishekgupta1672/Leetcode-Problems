class Solution {
public:
    int f(int i , int j , vector<vector<int>>& nums , vector<vector<int>>&dp){
        if(i == nums.size()-1) return nums[nums.size()-1][j];
        if(dp[i][j] != -1) return dp[i][j];
        int p1 = nums[i][j]+f(i+1,j,nums,dp);
        int p2 = nums[i][j]+f(i+1,j+1,nums,dp);
        return dp[i][j] = min(p1,p2);
    }
    
    int minimumTotal(vector<vector<int>>& nums) {
        int n = nums.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return f(0,0,nums,dp);
    }
};