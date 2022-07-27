class Solution {
public:
    int lcs(string &text1, string &text2, int m, int n, int dp[][1001])
    {
        if(m==0 || n==0) return 0;
        if(text1[m-1]==text2[n-1])
            return dp[m][n] = 1+ lcs(text1,text2,m-1,n-1,dp);
        if(dp[m][n]!=-1) return dp[m][n];
        return dp[m][n] = max(lcs(text1,text2,m-1,n,dp), lcs(text1,text2,m,n-1,dp));
    }    
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
        int n = text2.size();
        int dp[1001][1001];
        memset(dp,-1,sizeof(dp));
        return lcs(text1,text2,m,n,dp);
    }
};