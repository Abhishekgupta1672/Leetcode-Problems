class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>m;
        stringstream ss(s);
        string word;
        vector<string>t;
          while(ss>>word )
               t.push_back(word);
        if(pattern.size()!=t.size())
            return false;
        for(int i=0;i<t.size();i++)
        {
            if(m.find(pattern[i])==m.end())
                m[pattern[i]]=t[i];
            else
            {
                if(m[pattern[i]]!=t[i])
                    return false;
            }
        }
       unordered_map<string,int>z; 
       for(auto x: m)
       {
            if(z.find(x.second)==z.end())
                z[x.second]=1;
            else
                return false;
       }
       return true;
    }
};