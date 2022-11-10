class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<int,char>>res;
        for(int i=0;i<s.size();i++){
            if(res.empty() || res.back().second != s[i]){
                res.push_back({1,s[i]});
            }
            else if(++res.back().first == k)
                res.pop_back();
        }
        string ans = "";
        for(auto x:res) {
            ans.append(x.first,x.second);
        }
        return ans;
    }
};