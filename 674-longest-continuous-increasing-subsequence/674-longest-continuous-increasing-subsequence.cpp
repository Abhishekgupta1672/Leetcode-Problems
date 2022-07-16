class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int maxi = 0 , n = nums.size() , index = 0;
        for(int i=0;i<n;++i)
        {
            if(i>0 && nums[i-1]>=nums[i]) 
                index = i;
            maxi = max(maxi,i-index+1);
        }
        return maxi;
    }
};