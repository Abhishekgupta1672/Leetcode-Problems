class Solution {
public:
    static bool cmp(vector<int>& a, vector<int>&b) {
        return a[1] < b[1] || a[1] == b[1] && a[0] < b[0];
    }
    
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end(),cmp);
        int cur = INT_MIN , ans = 0;
        for(auto x : pairs){
            if(cur < x[0]){
                cur = x[1];
                ans++;
            }
        }
        return ans;
    }
};