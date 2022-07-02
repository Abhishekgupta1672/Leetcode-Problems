class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int l=0,r=nums.size()-1,m,j;
        while(l<r)
        {
            m=l+(r-l)/2;
            j=m%2?m-1:m+1;
            if(nums[m]==nums[j])
                l=m+1;
            else
                r=m;
        }
        return nums[l];
    }
};