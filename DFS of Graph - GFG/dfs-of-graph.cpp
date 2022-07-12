// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  void dfsrec(int node , vector<int> adj[] , vector<bool>&vis , vector<int>&dfs)
  {
      vis[node] = true;
      dfs.push_back(node);
      for(auto itr:adj[node])
      {
          if(vis[itr]==false){
              dfsrec(itr,adj,vis,dfs);
          }
      }
  }
  
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int>dfs;
        vector<bool>vis(V+1,false);
        for(int i=0;i<V;i++)
        {
            if(vis[i]==false)
            {
                dfsrec(i,adj,vis,dfs);
            }
        }
        return dfs;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends