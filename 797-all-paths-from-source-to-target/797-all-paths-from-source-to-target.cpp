class Solution {
public:
    vector<vector<int>>ans;   
    void dfs(vector<vector<int>>&graph, vector<int>&path, int start)
    {
        path.push_back(start);   
        if(start==graph.size()-1)
            ans.push_back(path);
        for(auto adj : graph[start])
            dfs(graph, path, adj); 
        path.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int>path;  
        dfs(graph,path,0); 
        return ans;
    }
};