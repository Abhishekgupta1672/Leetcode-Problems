//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
  public:
  const int MAX = 1e7;
	void shortest_distance(vector<vector<int>>&dp){
	    // Code here
	    int n = dp.size();
	    
	    for(int k = 0 ; k < n ; k++){
	        for(int i = 0 ; i < n ; i++){
	            for(int j = 0 ; j < n ; j++){
	                if(dp[i][k] != -1 && dp[k][j] != -1){
	                    
	                    dp[i][j] =(dp[i][j] ==-1)?dp[i][k]+dp[k][j] : min(dp[i][j],dp[i][k]+dp[k][j]);
	                }
	            }
	        }
	    }
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>matrix(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution obj;
		obj.shortest_distance(matrix);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cout << matrix[i][j] << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends