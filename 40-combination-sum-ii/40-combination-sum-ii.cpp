class Solution {
public:
    void solve(int idx, vector<int>&cand, vector<int>&ds, int target, vector<vector<int>>&res)
    {
        if(target==0)
        {
            res.push_back(ds);
            return;
        }
        for(int i=idx;i<cand.size();i++)
        {
            if(i>idx && cand[i]==cand[i-1]) continue;
            if(cand[idx]>target) break;
            ds.push_back(cand[i]);
            solve(i+1,cand,ds,target-cand[i],res);
            ds.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& cand, int target) {
        sort(cand.begin(),cand.end());
        vector<int>ds;
        vector<vector<int>>res;
        solve(0,cand,ds,target,res);
        return res;
    }
};