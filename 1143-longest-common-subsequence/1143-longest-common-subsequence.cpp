class Solution {
public:
    int solve(int i,int j,string& str1,string& str2, vector<vector<int>>&dp){
    if(i==0|| j==0) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    if(str1[i-1]==str2[j-1])
        return dp[i][j] = 1+solve(i-1,j-1,str1,str2,dp);
    else
    return dp[i][j] = max(solve(i-1,j,str1,str2,dp),solve(i,j-1,str1,str2,dp));
}

    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size(),m=text2.size();
        vector<vector<int>>dp(1001,vector<int>(1001,-1));
        return solve(n,m,text1,text2,dp);
    }
};