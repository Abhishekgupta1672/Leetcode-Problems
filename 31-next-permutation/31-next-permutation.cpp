class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pick = -1;
        for(int i=nums.size()-1;i>0;i--)
        {
            if(nums[i]>nums[i-1])
            {
                pick = i-1;
                break;
            }
        }
        if(pick<0)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=nums.size()-1;i>0;i--)
        {
            if(nums[i]>nums[pick])
            {
                swap(nums[i], nums[pick]);
                reverse(nums.begin()+pick+1,nums.end());
                break;
            }
        }
    }
};