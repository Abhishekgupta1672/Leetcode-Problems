class Solution {
public:
    int maxi(vector<int>&prices,int idx,int buy,int n,int k,vector<vector<vector<int>>>&dp){
        if(idx==n || k==0) return 0;
        if(dp[idx][buy][k] != -1) return dp[idx][buy][k];
        int profit;
        if(buy==0){
            profit = max(0+maxi(prices,idx+1,0,n,k,dp),-prices[idx]+maxi(prices,idx+1,1,n,k,dp));
        }
        if(buy==1){
            profit = max(0+maxi(prices,idx+1,1,n,k,dp),prices[idx]+maxi(prices,idx+1,0,n,k-1,dp));
        }
        return dp[idx][buy][k] = profit;
    }
    
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(k+1,-1)));
        return maxi(prices,0,0,n,k,dp);
    }
};