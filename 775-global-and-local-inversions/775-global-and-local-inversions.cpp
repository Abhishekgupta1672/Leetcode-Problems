class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==i+1 || nums[i]==i-1 || nums[i]==i)
                continue;
            else
                return false;
        }
        return true;
    }
};