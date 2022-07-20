class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        vector<vector<int>> v(26);
        for(int i=0;i<s.length();i++)
            v[s[i]-'a'].push_back(i);     
        int ans=0;
        for(int i=0;i<words.size();i++)
        {
            int last;                      
            if(v[words[i][0]-'a'].size()==0)
                continue;                      
            else{
                last=*v[words[i][0]-'a'].begin();      
            }
            int flag=1;
            for(int j=1;j<words[i].size();j++){
                auto it=upper_bound(v[words[i][j]-'a'].begin(),v[words[i][j]-'a'].end(),last);       
                if(it==v[words[i][j]-'a'].end())
                {                          
                    flag=0;
                    break;
                }
                else
                    last=*upper_bound(v[words[i][j]-'a'].begin(),v[words[i][j]-'a'].end(),last);
            }
            if(flag)
                ans++;
        }
        return ans;                                         
    }
};