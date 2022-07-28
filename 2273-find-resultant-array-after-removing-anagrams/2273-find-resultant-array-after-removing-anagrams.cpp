class Solution {
public:
    bool isanagram(string s1, string s2)
    {
        if(s1.size() != s2.size()) return false;
        unordered_map<char,int>mp;
        for(int i=0;i<s1.size();i++)
        {
            mp[s1[i]]++;
            mp[s2[i]]--;
        }
        for(auto x:mp)
            if(x.second > 0)
                return false;
        return true;
    }
    
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>res;
        for(int i=0;i<words.size();)
        {
            int j = i+1;
            while(j<words.size() && isanagram(words[i] , words[j]))
                j++;
            res.push_back(words[i]);
            i = j;
        }
        return res;
    }
};