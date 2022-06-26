class Solution {
public:
    vector<int> dp;
    Solution() : dp(46,-1){
        
    }
    int climbStairs(int n) {
        if(n == 0) return 1;
        if(dp[n] != -1) return dp[n];
        dp[n] = 0;
        dp[n] += climbStairs(n-1);
        if(n >= 2)
            dp[n] += climbStairs(n-2);
        return dp[n];
    }
};