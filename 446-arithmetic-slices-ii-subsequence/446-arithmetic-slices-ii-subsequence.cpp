class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        if(n<3) return 0;
        int res = 0;
        vector<unordered_map<long long int,long long int>>dp(n);
        for (int i = 0; i < nums.size(); i++) 
        {
            for (int j = 0; j < i; j++) 
            {
                long long int d = (long long int)nums[i] - nums[j];
                if (!dp[j].count(d)) 
                {
                    dp[i][d]++;
                } else 
                {
                    res += dp[j][d];
                    dp[i][d] += dp[j][d] + 1;
                }
            }
        }
        return res;
    }
};