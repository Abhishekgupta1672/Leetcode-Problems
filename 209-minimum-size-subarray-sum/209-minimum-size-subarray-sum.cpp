class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans = INT_MAX;
        int left = 0 ;
        int sum = 0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            while(sum>=target)
            {
                ans =  min(ans , i+1-left);
                sum-=nums[left];
                left++;
            }
        }
        return ans!=INT_MAX ? ans:0;
    }
};