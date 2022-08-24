class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        unordered_map<char,vector<int>>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]].push_back(i);
        }
        vector<int>res = mp[c];
        vector<int>ans;
        for(int i=0;i<s.size();i++)
        {
            int mini = INT_MAX;
            for(int j=0;j<res.size();j++)
            {
                mini = min(mini , abs(res[j]-i));
            }
            ans.push_back(mini);
        }
        return ans;
    }
};