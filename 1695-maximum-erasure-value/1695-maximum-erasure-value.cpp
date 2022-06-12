class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int temp = 0 , run = 0 , n = nums.size() , res=0 , sum=0;
        unordered_set<int> s;
        while(run < n)
        {
            while(s.find(nums[run]) != s.end())
            {
                sum-=nums[temp];
                s.erase(nums[temp++]);
            }
            sum+=nums[run];
            s.insert(nums[run++]);
            res = max(res , sum);
        }
        return res;
    }
};