class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>res;
        res.push_back(words[0]);
        for(int i=1;i<words.size();i++)
        {
            string temp = words[i];
            sort(temp.begin(),temp.end());
            string last = res.back();
            sort(last.begin(),last.end());
            if(temp != last) res.push_back(words[i]);
        }
        return res;
    }
};