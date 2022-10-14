//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 
  

// } Driver Code Ends
class Solution{
    public:
    int maximizeSum(int a[], int n) 
    {
        unordered_map<int,int>mp;
        int sum = 0;
        for(int i=0;i<n;i++) mp[a[i]]++;
        for(int i=n-1;i>=0;i--){
            if(mp[a[i]]>0 && mp.count(a[i]-1)>0){
                mp[a[i]]--;
                mp[a[i]-1]--;
                sum+=a[i];
            } 
            else if(mp[a[i]]>0){
                mp[a[i]]--;
                sum+=a[i];
            }
        }
        return sum; 
    }
};


//{ Driver Code Starts.



int main()
{
    
    int t;cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr, arr+n);
        Solution ob;
        
        cout << ob.maximizeSum(arr, n) << endl;
        
        
    }

}


// } Driver Code Ends