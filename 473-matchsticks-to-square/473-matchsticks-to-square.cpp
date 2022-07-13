class Solution {
public:
    bool dfs(vector<int>&matchsticks , vector<int>&res , int index , int target)
    {
        if(index==-1) return true;
        for(int i=0;i<4;i++)
        {
            if(res[i]+matchsticks[index]>target) continue;
            res[i]+=matchsticks[index];
            if(dfs(matchsticks,res,index-1,target)) return true;
            res[i]-=matchsticks[index];
        }
        return false;
    }
    bool makesquare(vector<int>& matchsticks) {
        int sum=0;
        for(int X:matchsticks)
            sum+=X;
        if(sum%4!=0 || matchsticks.size()<4) return false;
        sort(matchsticks.begin(),matchsticks.end());
        vector<int>res(4,0);
        return dfs(matchsticks,res,matchsticks.size()-1,sum/4);
    }
};