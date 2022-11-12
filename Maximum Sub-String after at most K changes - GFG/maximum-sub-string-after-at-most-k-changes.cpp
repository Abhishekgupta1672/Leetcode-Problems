//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int characterReplacement(string s, int k){
		    int maxi = 1;
		    for(char ch='A';ch<='Z';ch++){
		        int cnt = 0;
		        int l = 0 , r = 0;
		        while(r<s.size()){
		            if(ch==s[r]){
		                maxi = max(maxi , r-l+1);
		                r++;
		            }
		            else{
		                if(cnt<k){
		                    maxi = max(maxi,r-l+1);
		                    r++ , cnt++;
		                }
		                else{
		                    while(l<s.size() && s[l]==ch){
		                        l++;
		                    }
		                    l++ , cnt--;
		                }
		            }
		        }
		    }
		    return maxi;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		int k;
		cin >> k;
		Solution obj;
		int ans = obj.characterReplacement(s, k);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends