class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=0,r=nums.size()-1,m;
        while(l<r)
        {
            m=l+(r-l)/2;
            if(m%2==0)
            {
                if(nums[m]==nums[m+1])
                    l=m+1;
                else
                    r=m;
            }
            else
            {
                if(nums[m]==nums[m-1])
                    l=m+1;
                else
                    r=m;
            }
        }
        return nums[l];
    }
};