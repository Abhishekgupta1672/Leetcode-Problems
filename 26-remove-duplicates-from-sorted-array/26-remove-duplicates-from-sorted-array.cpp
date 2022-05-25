class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s;
        for(auto i:nums)
            s.insert(i);
        int i=0 , sz = s.size();
        for(auto x:s)
        {
            nums[i] = x;
            i++;
        }
        return sz;
    }
};