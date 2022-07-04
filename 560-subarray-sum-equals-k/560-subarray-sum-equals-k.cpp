class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        for(int i=1;i<nums.size();i++)
        {
            nums[i]+=nums[i-1];
        }
        int ans = 0;
        unordered_map<int , int>mp;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==k)
                ans++;
            if(mp.find(nums[i]-k) != mp.end())
                ans+=mp[nums[i]-k];
            mp[nums[i]]++;
        }
        return ans;
    }
};