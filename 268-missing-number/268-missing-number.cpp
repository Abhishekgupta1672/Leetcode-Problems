class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ind = 0;
        for(auto i:nums)
            mp[i]++;
        for(int i=0;i<=nums.size();i++)
        {
            if(mp.find(i)==mp.end())
            {   
                ind =i;
                break;
            }
        }
        return ind;
    }
};