class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int>res;
        for(int &x:nums){
            res.push_back(x);
            while(res.size()>1 && __gcd(res.back(),res[res.size()-2]) > 1){
                long long a = res.back() , b = res[res.size()-2] , ans = __gcd(a,b);
                res.pop_back();
                res.pop_back();
                res.push_back(a*b/ans);
            }
        }
        return res;
    }
};