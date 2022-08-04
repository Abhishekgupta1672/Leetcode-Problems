class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>v = nums;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            int val = v[i]-1;
            int cans = upper_bound(nums.begin() , nums.end() , val)-nums.begin();
            v[i] = cans;
        }
        return v;
    }
};