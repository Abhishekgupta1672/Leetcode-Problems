class Solution {
public:
    bool validColor(int c, int node, vector<vector<int>>&graph,vector<int>&color)
    {
        if(color[node] != 0) return color[node] == c;
        color[node] = c;
        for(auto itr: graph[node])
        {
            if(!validColor(-c,itr,graph,color)) return false;
        }
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int>color(graph.size());
        for(int i=0;i<graph.size();i++)
        {
            if(color[i]==0 && ! validColor(1,i,graph,color))
                return false;
        }
        return true;
    }
};