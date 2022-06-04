class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int , int>mp;
        for(auto i:nums)
            mp[i]++;
        int p;
        for(auto i:mp)
        {
            if(i.second==1)
            {
                p = i.first;
                break;
            }
        }
        return p;
    }
};