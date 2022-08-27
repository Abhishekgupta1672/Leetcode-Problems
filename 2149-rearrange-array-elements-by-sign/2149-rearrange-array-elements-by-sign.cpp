class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size());
        int i=0,j=0,k=1;
        while(i<nums.size())
        {
            if(nums[i]>0)
            {
                ans[j]=nums[i];
                j+=2;
            }
            else
            {
                ans[k]=nums[i];
                k+=2;
            }
            i++;
        }
        return ans;
    }
};