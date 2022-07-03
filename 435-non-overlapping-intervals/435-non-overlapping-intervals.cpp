class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& nums) {
        sort(nums.begin() , nums.end());
        int cnt = 0;
        vector<vector<int>>v;
        v.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i][0]<v.back()[1])
            {
                cnt++;
                v.back()[1] = min(v.back()[1] , nums[i][1]);
            }
            else
                v.push_back(nums[i]);
        }
        return cnt;
    }
};