//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution{
public:
    int c[10] = { 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
    vector<int> minPartition(int N){
        int i = 9;
        vector<int> res;
        while(i >= 0){
            while(N >= c[i]){
                res.push_back(c[i]);
                N-=c[i];
            }
            i--;
        }
        return res;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends