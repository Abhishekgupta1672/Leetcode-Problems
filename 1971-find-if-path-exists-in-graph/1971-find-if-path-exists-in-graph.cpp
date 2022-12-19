class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>>mp;
        for(auto e:edges){
            int a = e[0] , b = e[1];
            mp[a].push_back(b);
            mp[b].push_back(a);
        }
        queue<int>q;
        vector<int>vis(n,0);
        vis[source] = 1;
        q.push(source);
        while(!q.empty()){
            int cur = q.front();
            q.pop();
            if(cur == destination) return true;
            for(auto x : mp[cur]){
                if(!vis[x]){
                    vis[x] = 1;
                    q.push(x);
                }
            }
        }
        return false;
    }
};