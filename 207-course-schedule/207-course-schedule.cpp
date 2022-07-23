class Solution {
public:
    bool canFinish(int num, vector<vector<int>>& pre) {
        vector<int>vis(num,0);
        vector<int>adj[num];
        for(auto itr:pre)
        {
            adj[itr[1]].push_back(itr[0]);
            vis[itr[0]]++;
        }
        queue<int>q;
        for(int i=0;i<num;i++)
        {
            if(vis[i]==0)
                q.push(i);
        }
        vector<int>res;
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            res.push_back(node);
            for(auto itr:adj[node])
            {
                if(--vis[itr]==0)
                    q.push(itr);
            }
        }
        return res.size()==num;
    }
};