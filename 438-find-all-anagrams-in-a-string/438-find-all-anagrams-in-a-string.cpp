class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        vector<int>res;
        int m = s.size() , n = p.size();
        if(n>m)
            return res;
        int l = 0 , r = 0;
        for(int i=0;i<n;i++)
        {
            v1[p[i]-'a']++;
            v2[s[i]-'a']++;
            r++;
        }
        r-=1;
        while(r<m)
        {
            if(v1==v2)
                res.push_back(l);
            r+=1;
            if(r!=m)
                v2[s[r]-'a']+=1;
            v2[s[l]-'a']-=1;
            l++;
        }
        return res;
    }
};