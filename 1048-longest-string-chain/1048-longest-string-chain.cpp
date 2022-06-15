class Solution {
public:
    static bool cmp(string &first ,string &second)
    {
        return first.size()<second.size();
    };
    int longestStrChain(vector<string>& words) {
        sort(words.begin() , words.end() , cmp);
        map<string,int> m;
        int res = 0;
        for(string word:words)
        {
            int longest =0;
            for(int i = 0;i<word.length();i++)
            {
                string sub = word.substr(0,i) + word.substr(i+1,word.length()+1);
                longest = max(longest,m[sub]+1);   
            }
            m[word] = longest;
            res = max(res,longest);
        }
        return res;
    }
};