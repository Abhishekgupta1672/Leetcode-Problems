class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size(), cnt=0 ,right=0, left=0;
        unordered_map<char,int>mp;
        while(right != s.size())
        {
            mp[s[right]]++;
            while(mp['a'] && mp['b'] && mp['c'])
            {
                cnt += (n-right);
                mp[s[left++]]--;
            }
            right++;
        }
        return cnt;
    }
};