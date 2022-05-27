class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        if(str.size()==0)
            return "";
        if(str.size()==1)
            return str[0];
        int i=0;
        sort(str.begin() , str.end());
        string s = str[0] , t = str[str.size()-1];
        int n  = min(s.size() , t.size());
        while(i<n && s[i]==t[i])
        {
            i++;
        }
        string res = s.substr(0 , i);
        return res;
    }
}; 