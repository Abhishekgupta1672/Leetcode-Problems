class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char , int>mp;
        for(const char &X: s)
            mp[X]++;
        int ans = 0;
        unordered_set<int>seen;
        for(auto i : mp)
        {
            while(seen.find(i.second) != seen.end())
            {
                (i.second)--;
                ans++;
            }
            if(i.second>0)
                seen.insert(i.second);
        }
        return ans;
    }
};