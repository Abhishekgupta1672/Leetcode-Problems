class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        unordered_map<int , int>mp;
        for(auto i:nums1)
            mp[i]++;
        for(auto i:nums2)
        {
            if(mp[i])
            {
                v.push_back(i);
                mp[i]--;
            }
        }
        return v;    
    }
};