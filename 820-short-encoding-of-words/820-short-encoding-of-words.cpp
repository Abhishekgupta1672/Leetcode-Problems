class Solution {
public:
    static bool cmp (string& a, string& b) {
        return a.size() > b.size();
    }
    
    int minimumLengthEncoding(vector<string>& words) {
        unordered_map<string, int> mp;
        int ans = 0;
        sort(words.begin(), words.end(), cmp);
        for(int i=0; i<words.size(); i++){
            mp[words[i]]++;
        }
        for(int i=0; i<words.size(); i++)
        {
            int k = words[i].size();
            if(mp[words[i]] >0)
            {
                ans += (k+1);
            }
            for(int j=k-1; j>=0; j--)
            {
                string s = words[i].substr(j, k-j);
                mp[s] = 0;
            }
        }
        return ans;
    }
};