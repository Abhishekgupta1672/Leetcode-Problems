class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        vector<vector<int>>res(nums.size()+1);
        for(auto x:mp){
            res[x.second].push_back(x.first);
        }
        vector<int>v;
        for(int i=nums.size();k;i--){
            for(auto x : res[i]){
                v.push_back(x);
                k--;
            }
        }
        return v;
    }
};