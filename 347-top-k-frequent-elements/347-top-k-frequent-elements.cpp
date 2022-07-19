class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto x:nums)
            mp[x]++;
        vector<vector<int>>v(nums.size()+1);
        for(auto x:mp)
        {
            v[x.second].push_back(x.first);
        }
        vector<int>res;
        for(int i=nums.size();k;i--)
        {
            for(auto a:v[i])
            {
                res.push_back(a);
                k--;
            }
        }
        return res;
    }
};