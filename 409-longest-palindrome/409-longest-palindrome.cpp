class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char , int>mp;
        int res = 0;
        for(char x:s)
        {
            mp[x]++;
            if(mp[x]==2)
            {
                res+=mp[x];
                mp[x] = 0;
            }
        }
        for(auto i:mp)
        {
            if(i.second==1)
            {
                res+=i.second;
                break;
            }
        }
        return res;
    }
};