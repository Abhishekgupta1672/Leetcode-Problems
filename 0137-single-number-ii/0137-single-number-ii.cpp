class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        unsigned int shift = 1;
        for(int i=0;i<32;i++){
            int cnt = 0;
            for(auto x:nums){
                if(x&shift){
                    cnt+=1;
                }
            }
            if(cnt%3 != 0){
                ans+=shift;
            }
            shift<<=1;
        }
        return ans;
    }  
};