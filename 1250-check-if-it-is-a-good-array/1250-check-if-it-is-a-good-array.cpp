class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        auto res = nums[0];
        for(auto x:nums){
            res = __gcd(res,x);
        }
        return res==1;
    }
};