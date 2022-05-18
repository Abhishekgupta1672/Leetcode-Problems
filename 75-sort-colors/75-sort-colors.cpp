class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red = 0;
        int curr = 0;
        int blue = nums.size()-1;
        while(curr<=blue)
        {
            if(nums[curr]==0)
            {
                swap(nums[red],nums[curr]);
                curr++;
                red++;
            }
            else if(nums[curr]==2)
            {
                swap(nums[blue],nums[curr]);
                blue--;
            }
            else
                curr++;
        }
    }
};