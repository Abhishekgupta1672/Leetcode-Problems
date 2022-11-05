//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int maxGroupSize(int arr[], int n, int k) {
        unordered_map<int,int>m;
        for (auto i = 0; i < n; i++){
            m[arr[i]%k]++;
        }
        int ans = 0;
        for (int i = 1; i <= k/2; i++){
            if (k % 2 == 0 && i == k/2){
                ans += m.find(i) != m.end()? 1: 0;
                continue;
            }
            ans += max(m[i],m[k-i]);
        }
        return ans + (m.find(0) != m.end()? 1: 0);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.maxGroupSize(arr,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends