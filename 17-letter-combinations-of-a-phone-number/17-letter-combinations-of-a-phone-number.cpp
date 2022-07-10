class Solution {
public:
    vector<string>res;
    unordered_map<int,string>mp;

    void solve(string digits,string &ans,int i)
    {
        if(i==digits.size())
        {
            res.push_back(ans);
            return;
        }
        for(auto letter:mp[digits[i]-'0'])
        {
            ans+=letter;
            solve(digits,ans,i+1);
            ans.pop_back();
        }
        return;
    }
    
    vector<string> letterCombinations(string digits) {
        if(digits=="") return res;
        mp[2]="abc";
        mp[3]="def";
        mp[4]="ghi";
        mp[5]="jkl";
        mp[6]="mno";
        mp[7]="pqrs";
        mp[8]="tuv";
        mp[9]="wxyz";
        string ans = "";
        solve(digits,ans,0);
        return res;
    }
};