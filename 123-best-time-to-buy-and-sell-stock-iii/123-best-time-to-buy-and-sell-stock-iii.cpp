class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));
        for(int i=n-1;i>=0;i--){
            for(int buy=0;buy<=1;buy++){
                for(int maxTrans=1;maxTrans<=2;maxTrans++){
                    if(buy==0){
                        dp[i][buy][maxTrans] = max(0+dp[i+1][0][maxTrans],-prices[i]+dp[i+1][1][maxTrans]);
                    }
                    if(buy==1){
                        dp[i][buy][maxTrans] = max(0+dp[i+1][1][maxTrans],prices[i]+dp[i+1][0][maxTrans-1]);
                    }
                }
            }
        }
        return dp[0][0][2];
    }
};