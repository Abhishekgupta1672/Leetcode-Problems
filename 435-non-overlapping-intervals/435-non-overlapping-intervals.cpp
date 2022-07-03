class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& nums) {
        sort(nums.begin() , nums.end());
        int cnt = 0;
        int temp = nums[0][1];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i][0]<temp)
            {
                cnt++;
                temp = min(temp , nums[i][1]);
            }
            else
                temp = nums[i][1];
        }
        return cnt;
    }
};