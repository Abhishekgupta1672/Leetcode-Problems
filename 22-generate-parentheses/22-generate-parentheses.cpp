class Solution {
public:
    void generate(vector<string>&v , int n , int oc , int cc , string s)
    {
        if(oc==n && cc==n)
        {
            v.push_back(s);
            return;
        }
        if(oc<n)
            generate(v,n,oc+1,cc,s+'(');
        if(cc<oc)
            generate(v,n,oc,cc+1,s+')');
    }
    vector<string> generateParenthesis(int n) {
        int cc = 0 , oc = 0;
        vector<string>v;
        string s = "";
        generate(v,n,0,0,s);
        return v;
    }
};