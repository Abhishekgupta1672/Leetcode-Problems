class Solution {
public:
    vector<vector<int>>memo;
    int rec(string &s, int i, int j){
        if(i>=j) return 0;
        if(memo[i][j] != -1) return memo[i][j];
        return memo[i][j] = s[i]==s[j]? rec(s,i+1,j-1) : 1+ min(rec(s,i+1,j) , rec(s,i,j-1));
    }
    
    int minInsertions(string s) {
        memo.resize(s.size(),vector<int>(s.size(),-1));
        return rec(s,0,s.size()-1);
    }
};