class Solution {
public:
    void solve(int ind , vector<int>cand,int target,vector<int>&ds,vector<vector<int>>&res)
    {
        if(target==0)
        {
            res.push_back(ds);
            return;
        }
        for(int i=ind;i<cand.size();i++)
        {
            if(i>ind && cand[i]==cand[i-1]) continue;
            if(cand[i]>target) break;
            ds.push_back(cand[i]);
            solve(i+1,cand,target-cand[i],ds,res);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& cand, int target) {
        sort(cand.begin(),cand.end());
        vector<vector<int>>res;
        vector<int>ds;
        solve(0,cand,target,ds,res);
        return res;
    }
};