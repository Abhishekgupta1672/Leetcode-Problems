class Solution {
public:
    int **dp;
    
    int maxLen(string& s1, string& s2, int n, int m)
    {
        if (n == 0 || m == 0)
            return 0;
        
        if (dp[n][m] != -1)
            return dp[n][m];

        if (s1[n - 1] == s2[m - 1])
            return dp[n][m] = 1 + maxLen(s1, s2, n - 1, m - 1);
        else
            return dp[n][m] = max(maxLen(s1, s2, n, m - 1),maxLen(s1, s2, n - 1, m));
    }
        
    int longestCommonSubsequence(string s1, string s2) 
    {
        dp = new int*[s1.size()+1];
        for(int i = 0 ; i <= s1.size() ; i++){
            dp[i] = new int[s2.size()+1];
            for(int j = 0 ; j <= s2.size() ; j++) dp[i][j] = -1;
        }
        return maxLen(s1, s2, s1.length(), s2.length());
    }
    
};