class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       vector<int>v(nums.size(),0);
        int ind = 0;
        for(int i=0;i<nums.size();i++)
        {
            v[nums[i]]++;
        }
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>1)
            {
                ind = i;
                break;
            }
        }
        return ind;
    }
};