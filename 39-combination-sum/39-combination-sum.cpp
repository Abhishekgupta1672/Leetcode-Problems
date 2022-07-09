class Solution {
public:
    void solve(int index , vector<int>&candidates, int target,vector<int>&ds,vector<vector<int>>&res)
    {
        if(index==candidates.size())
        {
            if(target==0)
                res.push_back(ds);
            return;
        }
        if(candidates[index]<=target)
        {
            ds.push_back(candidates[index]);
            solve(index,candidates,target-candidates[index],ds,res);
            ds.pop_back();
        }
        solve(index+1,candidates,target,ds,res);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>ds;
        solve(0,candidates,target,ds,res);
        return res;
    }
};