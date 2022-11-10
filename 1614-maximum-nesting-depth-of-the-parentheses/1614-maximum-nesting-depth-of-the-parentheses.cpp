class Solution {
public:
    int maxDepth(string s) {
        int maxi = 0 , cnt = 0;
        for(auto x:s){
            if(x=='('){
                cnt++;
                maxi = max(maxi,cnt);
            }
            else if(x==')') cnt--;
        }
        return maxi;
    }
};