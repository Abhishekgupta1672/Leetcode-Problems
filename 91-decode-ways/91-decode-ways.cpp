class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        vector<int>dp(n+1,0);
        if(s[0]=='0')
            return 0;
        if(n==1)
            return 1;
        int i,j;
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++)
        {
            int one = s[i-1]-'0';
            string temp = s.substr(i-2,2);
            // cout<<temp<<"  ";
            if(one>=1)
                dp[i]+=dp[i-1];
            // cout<<dp[i]<<" ";
            if(stoi(temp)>=10 && stoi(temp)<=26)
                dp[i]+=dp[i-2];
            // cout<<dp[i]<<" ";
        }
        return dp[n];
    }
};