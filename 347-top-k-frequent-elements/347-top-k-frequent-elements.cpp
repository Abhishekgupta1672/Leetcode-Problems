class Solution {
public:
    static bool cmp(pair<int , int>&a , pair<int , int>&b)
    {
        return a.second<b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int ,int>mp;
        for(auto x:nums)
            mp[x]++;
        vector<pair<int ,int>>v(mp.begin() , mp.end());
        sort(v.begin() , v.end() ,cmp);
        vector<int>res;
        for(auto it = v.rbegin() ; it!=v.rend();it++)
        {
            if(k)
            {
                res.push_back(it->first);
                k--;
            }
        }
        return res;
    }
};