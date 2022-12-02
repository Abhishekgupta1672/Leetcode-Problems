class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        unordered_set<char>s1,s2;
        for(auto x:word1){
            v1[x-'a']++;
            s1.insert(x);
        }
        for(auto x:word2){
            v2[x-'a']++;
            s2.insert(x);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        return s1==s2 && v1==v2;
    }
};