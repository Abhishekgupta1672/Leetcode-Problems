class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size()-1;i++){
            int res = nums[i]+nums[i+1];
            mp[res]++;
            if(mp[res] > 1) return true;
        }
        return false;
    }
};