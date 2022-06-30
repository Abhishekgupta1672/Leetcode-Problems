class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        int median;
        if(n%2==0)
        {
            median = (nums[n/2-1]+nums[n/2])/2;
        }
        else
        {
            median = nums[n/2];
        }
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            cnt+=(abs(nums[i]-median));
        }
        return cnt;
    }  
};