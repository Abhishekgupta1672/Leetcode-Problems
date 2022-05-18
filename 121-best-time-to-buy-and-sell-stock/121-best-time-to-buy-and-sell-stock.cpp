class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int maxi = INT_MAX;
        int maxprofit = 0;
        int todayProfit = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(maxi>nums[i])
            {
                maxi = nums[i];
            }
            todayProfit = nums[i]-maxi;
            if(maxprofit<todayProfit)
                maxprofit = todayProfit;
        }
        return maxprofit;
    }
};