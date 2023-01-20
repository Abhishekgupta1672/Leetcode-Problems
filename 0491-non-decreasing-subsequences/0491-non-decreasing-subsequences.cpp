class Solution {
public:
    void dfs(vector<vector<int>>&res, vector<int>&ans,vector<int>&nums,int idx){
        if(ans.size()>=2) res.push_back(ans);
        unordered_set<int>st;
        for(int i=idx;i<nums.size();i++){
            if((ans.empty() || nums[i]>=ans.back()) && st.find(nums[i])==st.end()){
                ans.push_back(nums[i]);
                dfs(res,ans,nums,i+1);
                ans.pop_back();
                st.insert(nums[i]);
            }
        }
    }
    
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>ans;
        dfs(res,ans,nums,0);
        return res;
    }
};