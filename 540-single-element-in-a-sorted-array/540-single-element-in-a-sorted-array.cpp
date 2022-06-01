class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        int p;
        for(auto x:nums)
            mp[x]++;
        for(auto x: mp)
        {
            if(x.second==1)
            {
                p = x.first;
                break;
            }
        }
        return p;
    }
};