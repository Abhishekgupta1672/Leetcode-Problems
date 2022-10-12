//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
      string maxSum(string s,char x[], int b[],int n){
          // code here  
            unordered_map<char, int> mp;
            for(int i=0; i<n; i++) mp[x[i]] = b[i];
            
            int ans = INT_MIN, curr = 0;
            string temp, res;
            
            for(int i=0; i<s.length(); i++) {
              if(mp.find(s[i]) != mp.end()) curr += mp[s[i]];
              else curr += s[i];
              
              temp += s[i];
              if(curr > ans) {
                  ans = curr;
                  res = temp;
              }
              if(curr < 0) {
                  curr = 0;
                  temp = "";
              }
            }
            return res;
      }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string w;
        cin>>w;
        int n;
        cin>>n;
        char x[n];
        int b[n];
        for(int i = 0;i<n;i++)
            cin>>x[i];
        for(int i = 0;i<n;i++)
            cin>>b[i];
        Solution ob;
        cout << ob.maxSum(w,x,b,n) << endl;
    }
    return 0; 
}
// } Driver Code Ends