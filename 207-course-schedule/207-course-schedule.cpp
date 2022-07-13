class Solution {
public:
    bool canFinish(int V, vector<vector<int>>& pre) {
        vector<int>adj[V];
        vector<int>vis(V,0);
        for(auto itr:pre)
        {
          adj[itr[0]].push_back(itr[1]);
          vis[itr[1]]++;
        }
        queue<int>q;
        vector<int>vec;
        for(int i=0;i<V;i++)
        {
          if(vis[i]==0)
          {
            q.push(i);
          }
        }
        while(!q.empty())
        {
          auto node=q.front();
          q.pop();
          vec.push_back(node);
          for(auto x:adj[node])
          {
            if(--vis[x]==0)
            {
              q.push(x);
            }
          }
        }
	   return (vec.size()==V); 
    }
};