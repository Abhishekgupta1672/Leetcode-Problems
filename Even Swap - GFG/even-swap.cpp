//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
        vector <int> lexicographicallyLargest(vector <int> &a,int n)
        {
            // Code here
            vector<int>ans;
            vector<int>odd,even;
            
            bool f=true;
            if(a[0]%2)
            {
                odd.push_back(a[0]);
                f=false;
            }
            else
            even.push_back(a[0]);
            
            for(int i=1;i<n;i++)
            {
                if(a[i]%2 and f==false)
                {
                    odd.push_back(a[i]);
                }
                else if(a[i]%2 and f)
                {
                    // transfer all elements from even to ans(sorted)
                    sort(even.begin(),even.end());
                    int x=even.size();
                    for(int j=0;j<x;j++)
                    {
                        ans.push_back(even.back());
                        even.pop_back();
                    }
                    
                    f=!f;
                    odd.push_back(a[i]);
                    
                }
                else if(a[i]%2==0 and f==false)
                {
                    // transfer all elements from odd to
                    sort(odd.begin(),odd.end());
                    int y=odd.size();
                    for(int j=0;j<y;j++)
                    {
                        ans.push_back(odd.back());
                        odd.pop_back();
                    }
                    
                    f=!f;
                    even.push_back(a[i]);
                    
                }
                else if(a[i]%2==0 and f)
                {
                    even.push_back(a[i]);
                }
            }
            if(f==false)
            {
                sort(odd.begin(),odd.end());
                int y=odd.size();
                    for(int j=0;j<y;j++)
                    {
                        ans.push_back(odd.back());
                        odd.pop_back();
                    }
            }
            else
            {
                sort(even.begin(),even.end());
                int y=even.size();
                    for(int j=0;j<y;j++)
                    {
                        ans.push_back(even.back());
                        even.pop_back();
                    }
            }
            return ans;
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int> a(n);
        for(auto &j:a)
            cin>>j;
        Solution s;
        vector <int> b=s.lexicographicallyLargest(a,n);
        for(auto i:b)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends