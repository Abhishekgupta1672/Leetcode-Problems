class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            if(i==0)
            {
                v.push_back(nums[0]);
                continue;
            }
            nums[i] = nums[i]+nums[i-1];
            v.push_back(nums[i]);
        }
        return v;
    }
};