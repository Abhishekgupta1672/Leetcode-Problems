class Solution {
public:
    void solve(int index,vector<int>&nums,vector<vector<int>>&res)
    {
        if(index==nums.size())
        {
            res.push_back(nums);
            return;
        }
        unordered_set<int>st;
        for(int i=index;i<nums.size();i++)
        {
            if(st.find(nums[i]) != st.end()) continue;
            st.insert(nums[i]);
            swap(nums[i],nums[index]);
            solve(index+1,nums,res);
            swap(nums[i],nums[index]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>res;
        solve(0,nums,res);
        return res;
    }
};