class Solution {
public:
    int maxi(vector<int>& prices,int idx,int buy,int maxTrans,int n,vector<vector<vector<int>>>&dp){
        if(idx==n || maxTrans==2) return 0;
        if(dp[idx][buy][maxTrans] != -1) return dp[idx][buy][maxTrans];
        int profit;
        if(buy==0){
            profit = max(0+maxi(prices,idx+1,0,maxTrans,n,dp),-prices[idx]+maxi(prices,idx+1,1,maxTrans,n,dp));
        }
        if(buy==1){
            profit = max(0+maxi(prices,idx+1,1,maxTrans,n,dp),prices[idx]+maxi(prices,idx+1,0,maxTrans+1,n,dp));
        }
        return dp[idx][buy][maxTrans] = profit;
    }
    
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
        return maxi(prices,0,0,0,n,dp);
    }
};