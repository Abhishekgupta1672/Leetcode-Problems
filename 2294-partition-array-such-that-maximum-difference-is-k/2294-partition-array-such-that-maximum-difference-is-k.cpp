class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int res = 1 , mini = nums[0] , maxi = -1;
        for(auto x:nums){
            mini = min(x,mini);
            maxi = max(x,maxi);
            if(maxi - mini > k)
            {
                res++;
                maxi = mini = x;
            }
        }
        return res;
    }
};