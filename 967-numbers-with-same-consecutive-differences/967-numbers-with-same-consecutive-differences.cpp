class Solution {
public:
    void dfs(int num, int n, int k, vector<int>&res){
        if(n==0){
            res.push_back(num);
            return;
        }
        else{
            int ans = num%10;
            if(ans+k <= 9)
                dfs(num*10+ans+k,n-1,k,res);
            if(k != 0 && ans >= k)
                dfs(num*10+ans-k,n-1,k,res);
        }
    }
    
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int>res;
        for(int i=1;i<=9;i++){
            dfs(i,n-1,k,res);
        }
        return res;
    }
};