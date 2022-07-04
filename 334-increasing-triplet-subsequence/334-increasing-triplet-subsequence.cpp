class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int big = INT_MAX , small = INT_MAX;
        for(auto x:nums)
        {
            if(x<=big)
                big = x;
            else if(x<=small)
                small = x;
            else
                return true;
        }
        return false;
    }
};