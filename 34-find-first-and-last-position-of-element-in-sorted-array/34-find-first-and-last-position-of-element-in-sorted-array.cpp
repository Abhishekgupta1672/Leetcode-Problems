class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // vector<int>(2,-1);
        int l = 0 , r = nums.size()-1;
        int res1 = -1 , res2 = -1;
        while(l<=r)
        {
            int mid = l+(r-l)/2;
            if(target==nums[mid])
            {
                res1 = mid;
                r = mid-1;
            }
            else if(target<nums[mid])
                r = mid-1;
            else
                l = mid+1;
        }
        l = 0 , r = nums.size()-1;
        while(l<=r)
        {
            int mid = l+(r-l)/2;
            // cout<<mid<<" ";
            if(target==nums[mid])
            {
                res2 = mid;
                l = mid+1;
            }
            else if(target<nums[mid])
                r = mid-1;
            else
                l = mid+1;
        }
        return {res1 , res2};
    }
};