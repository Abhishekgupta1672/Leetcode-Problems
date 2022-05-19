class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       unordered_map<int,int>mp;
        int p;
        for(auto x:nums)
            mp[x]++;
        for(auto i : mp)
        {
            if(i.second>1)
            {
                p = i.first;
                break;
            }
        }
        return p;
    }
};