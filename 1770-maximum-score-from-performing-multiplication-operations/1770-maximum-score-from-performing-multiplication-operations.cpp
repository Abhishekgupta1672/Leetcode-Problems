class Solution {
public:
    int maximumScore(vector<int>& a, vector<int>& b) {
         int n = a.size(), m = b.size();
        vector <vector <int>> dp(m + 1, vector <int>(m + 1, 0));
        for (int k = m - 1; k >= 0; k--) 
            for (int l = k, r = 0; r <= k; r++, l--)
                dp[l][r] = max(dp[l + 1][r] + b[k] * a[l], dp[l][r + 1] + b[k] * a[n - r - 1]);
        return dp[0][0];
    }
};