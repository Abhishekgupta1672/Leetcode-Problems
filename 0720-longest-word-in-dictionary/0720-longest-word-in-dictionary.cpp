class Solution {
public:
    static bool cmp(string a,string b){
        if(a.size() != b.size()) return a.size()<b.size();
        else return a>b;
    }
    
    string longestWord(vector<string>& words) {
        vector<string>res;
        unordered_set<string>st;
        for(auto x:words) st.insert(x);
        for(int i=0;i<words.size();i++){
            string str;
            int cnt=0 , k;
            for(int j=1;j<=words[i].size();j++){
                str = words[i].substr(0,j);
                k = str.size();
                if(st.find(str) != st.end()) cnt++;
            }
            if(cnt==k) res.push_back(str);
        }
        if(res.size()==0) return "";
        sort(res.begin(),res.end(),cmp);
        return res[res.size()-1];
    }
};