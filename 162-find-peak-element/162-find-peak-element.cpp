class Solution {
public:
    int bsearch(vector<int>&nums , int l , int r)
    {
        if(l==r)
            return l;
        int mid = l+(r-l)/2;
        if(nums[mid]>nums[mid+1])
            return bsearch(nums , l , mid);
        else
            return bsearch(nums , mid+1 , r);
    }
    int findPeakElement(vector<int>& nums) {
        return bsearch(nums , 0 , nums.size()-1);
    }
};