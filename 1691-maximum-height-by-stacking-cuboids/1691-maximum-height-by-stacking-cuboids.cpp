class Solution {
public:
    int maxHeight(vector<vector<int>>& A) {
        A.push_back({0,0,0});
        for(int i=0;i<A.size();i++)
            sort(A[i].begin(),A[i].end());
        sort(A.begin(),A.end());
        int n = A.size() , maxH = 0;
        vector<int>dp(n,0);
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if((A[j][0] <= A[i][0]) && (A[j][1] <= A[i][1]) && (A[j][2] <= A[i][2]))
                {
                    dp[i] = max(dp[i],dp[j]+A[i][2]);
                    maxH = max(maxH,dp[i]);
                }
            }
        }
        return maxH;
    }
};