class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>res = {{}};
        vector<int>ans;
        sort(nums.begin() , nums.end());
        for(auto num:nums)
        {
            int sz = res.size();
            for(int i=0;i<sz;i++)
            {
                ans = res[i];
                ans.push_back(num);
                if(find(res.begin() , res.end() , ans)==res.end())
                    res.push_back(ans);
            }
        }
        return res;
    }
};