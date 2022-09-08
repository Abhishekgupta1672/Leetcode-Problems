class Solution {
public:
    int lcs(string &text1, string &text2,int m,int n,vector<vector<int>>&dp){
        if(m==0 || n==0) return 0;
        if(dp[m][n] != -1) return dp[m][n];
        if(text1[m-1] == text2[n-1])
            return dp[m][n] = 1+ lcs(text1,text2,m-1,n-1,dp);
        return dp[m][n] = max(lcs(text1,text2,m,n-1,dp),lcs(text1,text2,m-1,n,dp));
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>>dp(1001,vector<int>(1000,-1));
        int m = text1.size();
        int n = text2.size();
        return lcs(text1,text2,m,n,dp);
    }
};