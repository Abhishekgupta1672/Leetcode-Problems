class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k==0) return 0;
        int left = 0 , prod = 1 , res = 0;
        for(int i=0;i<nums.size();i++)
        {
            prod*=nums[i];
            while(prod>=k && left<=i)
            {
                prod/=nums[left];
                left+=1;
            }
            res += i-left+1;
        }
        return res;
    }
};