class Solution {
public:
    #define MOD 1000000007;
    int rec(int n,int k,int target,vector<vector<int>>&dp){
        if(n==0 && target==0) return 1;
        if(n<=0 || target<=0) return 0;
        if(dp[n][target] != -1) return dp[n][target];
        int cnt = 0;
        for(int i=1;i<=(min(k,target));i++){
            cnt+=rec(n-1,k,target-i,dp);
            cnt%=MOD;
        }
        dp[n][target] = cnt;
        return dp[n][target];
    }
    
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
        return rec(n,k,target,dp);
    }
};