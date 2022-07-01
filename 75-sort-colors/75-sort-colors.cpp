class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red = 0;
        int blue = nums.size()-1;
        int cur = 0;
        while(cur <= blue)
        {
            if(nums[cur]==0)
            {
                swap(nums[cur] , nums[red]);
                red++;
                cur++;
            }
            else if(nums[cur]==2)
            {
                swap(nums[cur] , nums[blue]);
                blue--;
            }
            else
                cur++;
        }
    }
};