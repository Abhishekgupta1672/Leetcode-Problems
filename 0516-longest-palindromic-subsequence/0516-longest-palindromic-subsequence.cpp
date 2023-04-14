class Solution {
public:
    int lps(string &s, string &t, int m, int n, vector<vector<int>>&dp){
        if(m==0 || n==0) return 0;
        if(dp[m][n] != -1) return dp[m][n];
        if(s[m-1] == t[n-1]) return 1+lps(s,t,m-1,n-1,dp);
        return dp[m][n] = max(lps(s,t,m-1,n,dp),lps(s,t,m,n-1,dp));
    }

    int longestPalindromeSubseq(string s) {
        int n = s.size();
        string t = s;
        reverse(t.begin(),t.end());
        vector<vector<int>>dp(1001,vector<int>(1001,-1));
        return lps(s,t,s.size(),t.size(),dp);
    }
};