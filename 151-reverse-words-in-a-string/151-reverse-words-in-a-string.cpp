class Solution {
public:
    string reverseWords(string s) {
        vector<string>res;
        stringstream ss(s);
        string word;
        while(ss>>word)
            res.push_back(word);
        string ans = "";
        for(int i=res.size()-1;i>=0;i--)
        {
            if(i!=res.size()-1)
                ans+=" ";
            ans+=res[i];
        }
        return ans;
    }
};