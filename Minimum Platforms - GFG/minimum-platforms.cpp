// { Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    sort(arr,arr+n);
    sort(dep,dep+n);
    vector<pair<int,int> > v;
    for(int i=0;i<n;i++){
        v.push_back({dep[i],arr[i]});
    }
    vector<int> ans;
    ans.push_back(v[0].first);
    for(int i=1;i<n;i++){
        int f=1;
        for(int j=0;j<ans.size();j++){
            if(ans[j]<v[i].second){
                ans[j]=v[i].first;
                f=0;
                break;
            }
        }
        if(f==1){
            ans.push_back(v[i].first);
        }
    }
    return ans.size();
   }
};


// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  // } Driver Code Ends