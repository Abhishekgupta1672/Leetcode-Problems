class Solution {
public:
    int lcs(vector<int>& nums1, vector<int>& nums2,int m,int n,vector<vector<int>>&dp){
        if(m==0 || n==0) return 0;
        if(dp[m][n] != -1) return dp[m][n];
        if(nums1[m-1]==nums2[n-1]) return dp[m][n] = 1+lcs(nums1,nums2,m-1,n-1,dp);
        return dp[m][n] = 0;
    }
    
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size() , n = nums2.size() , ans = 0;
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        for(int i=m;i>=0;i--){
            for(int j=n;j>=0;j--){
                ans = max(ans,lcs(nums1,nums2,i,j,dp));
            }
        }
        return ans;
    }
};