class Solution {
public:
    int candy(vector<int>& ratings) {
        int sz = ratings.size();
        if(sz<=1)
            return sz;
        vector<int> nums(sz,1);
        for(int i=1;i<sz;i++)
        {
            if(ratings[i]>ratings[i-1])
                nums[i] = nums[i-1]+1;
        }
        for(int i=sz-1;i>0;i--)
        {
            if(ratings[i-1]>ratings[i])
                nums[i-1] = max(nums[i]+1 , nums[i-1]);
        }
        int res = 0;
        for(int i=0;i<nums.size();i++)
            res+=nums[i];
        return res;
    }
};