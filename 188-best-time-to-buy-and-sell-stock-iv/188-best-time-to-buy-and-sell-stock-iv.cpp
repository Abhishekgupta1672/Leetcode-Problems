class Solution {
public:
    
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(k+1,0)));
        for(int i=n-1;i>=0;i--){
            for(int buy=0;buy<=1;buy++){
                for(int ms=1;ms<=k;ms++){
                    if(buy==0){
                        dp[i][buy][ms] = max(0+dp[i+1][0][ms],-prices[i]+dp[i+1][1][ms]);
                    }
                    if(buy==1){
                        dp[i][buy][ms] = max(0+dp[i+1][1][ms],prices[i]+dp[i+1][0][ms-1]);
                    }
                }
            }
        }
        return dp[0][0][k];
    }
};