class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int ans = 0 , unpaired = 0;
        unordered_map<string,int>mp;
        for(auto x:words){
            if(x[0]==x[1]){
                if(mp[x]>0){
                    mp[x]--;
                    ans+=4;
                    unpaired--;
                }
                else{
                    mp[x]++;
                    unpaired++;
                }
            }
            else{
                string tmp = x;
                reverse(tmp.begin(),tmp.end());
                if(mp[tmp]>0){
                    ans+=4;
                    mp[tmp]--;
                }
                else mp[x]++;
            }
        }
        if(unpaired>0) ans+=2;
        return ans;
    }
};