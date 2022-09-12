class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        vector<vector<int>>dp(n+1,vector<int>(2,0));
        for(int i=n-1;i>=0;i--){
            int profit;
            for(int buy=0;buy<=1;buy++){
                if(buy==0){
                    profit = max(dp[i+1][0],-prices[i]+dp[i+1][1]);
                }
                if(buy==1){
                    profit = max(dp[i+1][1],prices[i]+dp[i+1][0]-fee);
                }
                dp[i][buy] = profit;
            }
        }
        return dp[0][0];
    }
};