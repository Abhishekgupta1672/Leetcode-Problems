class Solution {
public:
    map<string,bool>mp;
    bool wordBreak(string s, vector<string>& wordDict) {
        if(find(wordDict.begin(),wordDict.end(),s) != wordDict.end())
            return true;
        if(mp.find(s) != mp.end())
            return mp[s];
        for(int i=1;i<s.size();i++)
        {
            string left = s.substr(0,i);
            if((find(wordDict.begin(),wordDict.end(),left) != wordDict.end()) && wordBreak(s.substr(i),wordDict))
            {
                mp[s] = true;
                return true;
            }
        }
        mp[s] = false;
        return false;
    }
};