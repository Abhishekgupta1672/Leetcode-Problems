class Solution {
public:
    
    int rec(int amount,int n,vector<int> &coins,vector<vector<int>> &dp){
        if(amount == 0 )
            return dp[amount][n] =  0;
        if(n == 0) return 100005;
        if(dp[amount][n] != -1) return dp[amount][n];
        if(amount >= coins[n-1]){
            return dp[amount][n] = min(rec(amount-coins[n-1],n,coins,dp)+1,rec(amount,n-1,coins,dp));
        }return dp[amount][n] = rec(amount,n-1,coins,dp);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n =coins.size();
        vector<int> dp(amount+1,0);
        
        for(int i = 1 ; i <= amount ; i++){
            dp[i] = 100005;
            for(int j = 1 ; j <= n ; j++){
                if(i >= coins[j-1]){
                    dp[i] = min(dp[i-coins[j-1]]+1,dp[i]);
                }
            }
        }
        return dp[amount] >= 100005?-1:dp[amount];
    }
};