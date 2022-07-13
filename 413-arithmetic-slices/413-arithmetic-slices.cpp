class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        if(n<3) return 0;
        int cur=0 , total=0;
        for(int i=2;i<n;i++)
        {
            if(nums[i]-nums[i-1] == nums[i-1]-nums[i-2])
                cur++;
            else
                cur=0;
            total+=cur;
        }
        return total;
    }
};