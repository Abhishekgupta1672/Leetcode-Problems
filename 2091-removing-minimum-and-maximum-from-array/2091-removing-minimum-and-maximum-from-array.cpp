class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini = INT_MAX , maxi = INT_MIN , minindex , maxindex , n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]<mini)
            {
                mini = nums[i];
                minindex = i;
            }
            if(nums[i]>maxi)
            {
                maxi = nums[i];
                maxindex = i;
            }
        }
        int l = n-(min(maxindex , minindex));
        int r = max(minindex , maxindex)+1;
        int lr = min(minindex , maxindex)+1 + n-(max(maxindex , minindex));
        return min(min(l,r) , lr);
    }
};