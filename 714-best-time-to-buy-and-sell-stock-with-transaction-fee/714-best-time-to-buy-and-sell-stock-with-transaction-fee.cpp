class Solution {
public:
    int solve(vector<int> &prices,int idx,int buy,int n,int fee,vector<vector<int>>&dp){
        if(idx==n) return 0;
        if(dp[idx][buy] != -1) return dp[idx][buy];
        int profit;
        if(buy==0){
            profit = max(solve(prices,idx+1,0,n,fee,dp),-prices[idx]+solve(prices,idx+1,1,n,fee,dp));
        }
        else{
            profit = max(solve(prices,idx+1,1,n,fee,dp),prices[idx]+solve(prices,idx+1,0,n,fee,dp)-fee);
        }
        return dp[idx][buy] = profit;
    }

    
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        vector<vector<int>>dp(n+1,vector<int>(2,-1));
        return solve(prices,0,0,n,fee,dp);
    }
};