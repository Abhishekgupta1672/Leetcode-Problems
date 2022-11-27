class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        if(n<3) return 0;
        int res = 0;
        vector<unordered_map<int,int>>dp(n);
        for (int i = 0; i < nums.size(); i++) 
        {
            for (int j = 0; j < i; j++) 
            {
                long d = (long)nums[i] - (long)nums[j];
                if(d<INT_MIN || d>INT_MAX) continue;
                if (!dp[j].count(d)) 
                    dp[i][d]++;
                else 
                {
                    res += dp[j][d];
                    dp[i][d] += dp[j][d] + 1;
                }
            }
        }
        return res;
    }
};