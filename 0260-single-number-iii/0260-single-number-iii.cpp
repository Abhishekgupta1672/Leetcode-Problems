class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unsigned int ans = 0;
        for(auto x:nums){
            ans^=x;
        }
        
        ans&=-ans;   //for last set bit
        vector<int>v = {0,0};
        for(int x:nums){
            if(x&ans){
                v[0]^=x;
            }
            else v[1]^=x;
        }
        return v;
    }
};