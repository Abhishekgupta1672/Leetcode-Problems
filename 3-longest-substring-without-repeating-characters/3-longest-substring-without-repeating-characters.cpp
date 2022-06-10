class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> mp(256,-1);
        int l=0 , r=0 , cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]] != -1){
                while(r <= mp[s[i]]){
                    mp[s[r]] = -1;
                    r++;
                }
            }else{
                cnt = max(cnt,i-r+1);
            }
            mp[s[i]] = i;
        }
        return cnt;
    }
};