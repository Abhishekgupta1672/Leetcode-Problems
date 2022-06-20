class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>v(256 , -1);
        int cnt=0 , r = 0;
        for(int i=0;i<s.size();i++)
        {
            if(v[s[i]] != -1)
            {
                while(r<=v[s[i]])
                {
                    v[s[r]]=-1;
                    r++;
                }
            }
            else
                cnt = max(cnt , i-r+1);
            v[s[i]] = i;
        }
        return cnt;
    }
};