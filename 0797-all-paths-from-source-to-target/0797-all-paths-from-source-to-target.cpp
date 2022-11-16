class Solution {
public:
    vector<vector<int>>res;
    void dfs(vector<vector<int>>&graph ,vector<int>&temp,int start){
        temp.push_back(start);
        if(start==graph.size()-1) res.push_back(temp);
        for(auto adj:graph[start]){
            dfs(graph,temp,adj);
        }
        temp.pop_back();
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int>temp;
        dfs(graph,temp,0);
        return res;
    }
};