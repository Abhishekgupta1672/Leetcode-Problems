class Solution {
public:
    int maxi(vector<int>&prices,int idx,int buy,int n,vector<vector<int>>&dp){
        if(idx==n) return 0;
        if(dp[idx][buy] != -1) return dp[idx][buy];
        int profit;
        if(buy==0)
        {
            profit = max(0+maxi(prices,idx+1,0,n,dp),-prices[idx]+maxi(prices,idx+1,1,n,dp));
        }
        if(buy==1)
        {
            profit = max(0+maxi(prices,idx+1,1,n,dp),prices[idx]+maxi(prices,idx+1,0,n,dp));
        }
        return dp[idx][buy] = profit;
        
    }
    
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return maxi(prices,0,0,n,dp);
    }
};