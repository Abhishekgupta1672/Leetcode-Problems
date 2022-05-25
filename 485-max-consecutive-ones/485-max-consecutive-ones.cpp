class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count = 0;
        int itr = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                itr++;
                if(itr>=max_count)
                    max_count = itr;
            }
            else if(nums[i]==0)
            {
                itr = 0;
            }
        }
        return max_count;
    }
};