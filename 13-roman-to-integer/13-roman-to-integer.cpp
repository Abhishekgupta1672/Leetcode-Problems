class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char , int>m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        int cnt = 0;
        int temp = m[s[s.size()-1]];
        for(int i=s.size()-1;i>=1;i--)
        {
            if(m[s[i]]<=m[s[i-1]])
                temp+=m[s[i-1]];
            else
            {
                temp-=m[s[i-1]];
            }
        }
        return temp;
    }
};