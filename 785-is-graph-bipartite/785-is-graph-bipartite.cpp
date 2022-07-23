class Solution {
public:
    bool validColor(vector<vector<int>>&graph,vector<int>&color,int c,int node)
    {
        if(color[node]!=0) return color[node] == c;
        color[node] = c;
        for(auto itr : graph[node])
        {
            if(!validColor(graph,color,-c,itr)) return false;
        }
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int>color(graph.size());
        for(int i=0;i<graph.size();i++)
        {
            if(color[i]==0 && !validColor(graph,color,1,i)) return false;
        }
        return true;
    }
};