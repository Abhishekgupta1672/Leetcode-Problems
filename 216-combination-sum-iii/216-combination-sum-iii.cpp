class Solution {
public:
    void solve(int idx, vector<int>&cand, vector<int>&ds, int target, vector<vector<int>>&res, int k)
    {
        if(target==0 && ds.size()==k)
        {
            res.push_back(ds);
            return;
        }
        for(int i=idx;i<cand.size();i++)
        {
            if(cand[idx]>target) break;
            ds.push_back(cand[i]);
            solve(i+1,cand,ds,target-cand[i],res,k);
            ds.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>cand = {1,2,3,4,5,6,7,8,9};
        vector<vector<int>>res;
        vector<int>ds;
        solve(0,cand,ds,n,res,k);
        return res;
    }
};