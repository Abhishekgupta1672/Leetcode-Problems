class Solution {
public:
    int lps(int l , int r , string &s, int dp[1001][1001])
    {
        if(l==r) return 1;
        if(l>r) return 0;
        if(dp[l][r] != -1) return dp[l][r];
        if(s[l]==s[r])
            return dp[l][r] = 2+lps(l+1,r-1,s,dp);
        return dp[l][r] = max(lps(l+1,r,s,dp),lps(l,r-1,s,dp));
    }
    int longestPalindromeSubseq(string s) {
        int dp[1001][1001];
        memset(dp,-1,sizeof(dp));
        return lps(0,s.size()-1,s,dp);
    }
};