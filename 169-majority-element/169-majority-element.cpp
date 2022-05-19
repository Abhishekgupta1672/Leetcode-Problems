class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        int n = nums.size()/2,p;
        for(auto i:nums)
            m[i]++;
        for(auto i:m)
        {
            if(i.second>n)
            {
                p = i.first;
                break;
            }
        }
        return p;
    }
};