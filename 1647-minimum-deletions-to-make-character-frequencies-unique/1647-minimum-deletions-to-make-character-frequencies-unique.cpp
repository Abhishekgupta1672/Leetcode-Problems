class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char , int>mp;
        for(const char &X: s)
            mp[X]++;
        int ans = 0;
        unordered_set<int>seen;
        for(auto [k,i] : mp)
        {
            while(seen.find(i) != seen.end())
            {
                i--;
                ans++;
            }
            if(i>0)
                seen.insert(i);
        }
        return ans;
    }
};