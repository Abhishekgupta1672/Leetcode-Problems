class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string ,int>mp;
        vector<string>res;
        if(s.size()<10)
            return res;
        for(int i=0;i<s.size()-9;i++)
        {
            mp[s.substr(i,10)]++;
        }
        for(auto X:mp)
        {
            if(X.second>1)
                res.push_back(X.first);
        }
        return res;
    }
};