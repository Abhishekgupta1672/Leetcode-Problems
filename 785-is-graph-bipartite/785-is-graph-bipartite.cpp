class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int>color(graph.size());
        for(int i=0;i<graph.size();i++)
        {
            if(color[i]==0)
            {
                queue<int>q;
                q.push(i);
                color[i] = 1;
                while(!q.empty())
                {
                    int node = q.front();
                    q.pop();
                    for(auto itr : graph[node])
                    {
                        if(color[itr]==0)
                        {
                            q.push(itr);
                            color[itr] = -color[node];
                        }
                        else if(color[itr]==color[node]) return false;
                    }
                }
            }
        }
        return true;
    }
};