class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char , int>mp;
        int l=0 , r=0 , cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(mp.count(s[i])){
                while(r <= mp[s[i]]){
                    mp.erase(s[r]);
                    r++;
                }
            }else{
                cnt = max(cnt,i-r+1);
            }
            mp[s[i]] = i;
        }
        cout<<'\n';
        return cnt;
    }
};