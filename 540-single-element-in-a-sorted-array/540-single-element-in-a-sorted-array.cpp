class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i = 0;
        for(int i=0;i<nums.size()-1;i=i+2)
        {
            int j=i+1;
            if(nums[i]!=nums[j])
                return nums[i];
        }
        return nums.size()==1?nums[0]:nums[nums.size()-1];
    }
};