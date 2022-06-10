class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char , int>mp;
        int l=0 , r=0 , cnt=0;
        for(int i=0;i<s.size();i++)
        {
            mp[s[r]]++;
            while(mp[s[r]]>1)
            {
                mp[s[l]]--;
                l++;
            }
            r++;
            cnt = max(cnt,r-l);  
        }
        return cnt;
    }
};