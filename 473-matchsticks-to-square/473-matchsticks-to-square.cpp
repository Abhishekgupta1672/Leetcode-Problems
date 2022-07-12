class Solution {
public:
    bool dfs(vector<int>&matchsticks,vector<int>&ans,int index,int target)
    {
        if(index==-1) return true;
        for(int i=0;i<4;i++)
        {
            if((ans[i]+matchsticks[index]>target) || (i>0 && ans[i]==ans[i-1]))
                continue;
            ans[i]+=matchsticks[index];
            if(dfs(matchsticks,ans,index-1,target))
                return true;
            ans[i]-=matchsticks[index];
        }
        return false;
    }
    bool makesquare(vector<int>& matchsticks) {
        int sum=0;
        for(auto x:matchsticks)
            sum+=x;
        if(sum%4 != 0 || matchsticks.size()<4)
            return false;
        sort(matchsticks.begin(),matchsticks.end());
        vector<int>ans(4,0);
        return dfs(matchsticks,ans,matchsticks.size()-1,sum/4);
    }
};