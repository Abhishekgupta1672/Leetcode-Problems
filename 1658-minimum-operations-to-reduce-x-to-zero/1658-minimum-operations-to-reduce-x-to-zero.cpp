class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum = 0;
        for(auto x:nums)
            sum+=x;
        if(sum<x)
            return -1;
        if(sum==x)
            return nums.size();
        int res = sum-x , currSum = 0 , temp=0 , minstep=0;
        for(int i = 0 ;i<nums.size();i++)
        {
            currSum+=nums[i];
            while(currSum>res)
            {
                currSum-=nums[temp++];
            }
            if(currSum==res)
               minstep = max(minstep , i-temp+1); 
        }
        return minstep==0?-1:nums.size()-minstep;
    }
};