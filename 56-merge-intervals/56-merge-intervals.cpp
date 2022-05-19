class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>&nums) {
        if(nums.size()<=1)
            return nums;
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        res.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            if(res.back()[1]>=nums[i][0])
            {
                res.back()[1] = max(res.back()[1],nums[i][1]);
            }
            else 
                res.push_back(nums[i]);
        }
        return res; 
    }
};