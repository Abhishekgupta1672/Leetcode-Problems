class Solution {
public:
    void solve(vector<int>&candidates, int idx, vector<int>&ds, int target, vector<vector<int>>&res)
    {
        if(idx==candidates.size())
        {
            if(target==0)
            {
                res.push_back(ds);
            }
            return;
        }
        
        if(candidates[idx]<=target)
        {
            ds.push_back(candidates[idx]);
            solve(candidates,idx,ds,target-candidates[idx],res);
            ds.pop_back();
        }
        solve(candidates,idx+1,ds,target,res);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>ds;
        solve(candidates,0,ds,target,res);
        return res;
    }
};