class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int>mp;
        vector<int>res(2,0);
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(nums[i]) != mp.end())
            {
                res[0] = i;
                res[1] = mp[nums[i]];
                break;
            }
            mp[target-nums[i]] = i;
        }
        return res;
    }
};