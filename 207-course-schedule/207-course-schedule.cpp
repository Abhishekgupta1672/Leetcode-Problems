class Solution {
public:
    bool checkForCycle(int s , vector<int>adj[] , vector<int>&vis)
    {
        if(vis[s]==1) return true;
         if(vis[s]==0)
         {
            vis[s]=1;
            for(auto edge : adj[s]){
                if(checkForCycle(edge,adj,vis))
                    return true;
            }
        }
        vis[s]=2;
        return false;
    }
    bool canFinish(int V, vector<vector<int>>& pre) {
        vector<int>adj[V];
        for(auto edge : pre)
            adj[edge[1]].push_back(edge[0]);
        vector<int>vis(V,0);
        for(int i=0;i<V;i++)
        {
            if(checkForCycle(i,adj,vis))
                return false;
        }
        return true;
    }
};