class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>>mp;
        for(auto x:strs)
        {
            string t = x;
            sort(t.begin() , t.end());
            mp[t].push_back(x);
        }
        vector<vector<string>>anagram;
        for(auto x:mp)
        {
            anagram.push_back(x.second);
        }
        return anagram;
    }
};