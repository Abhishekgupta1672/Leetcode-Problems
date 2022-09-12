class Solution {
public:
    int lps(int i,int j,string &s,vector<vector<int>>&dp){
        if(i==j) return 1;
        if(i>j) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        if(s[i]==s[j]) return dp[i][j] = 2+lps(i+1,j-1,s,dp);
        return dp[i][j] = max(lps(i+1,j,s,dp),lps(i,j-1,s,dp));
    }
    
    int longestPalindromeSubseq(string s) {
        vector<vector<int>>dp(1001,vector<int>(1001,-1));
        return lps(0,s.size()-1,s,dp);
    }
};