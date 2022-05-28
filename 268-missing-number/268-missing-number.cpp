class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        int missing = 0 , p;
        for(int i=0;i<nums.size();i++)
        {
            if(missing!=nums[i])
            {
               p = missing;
                break;
            }
            missing++;
        }
        return p;
    }
};