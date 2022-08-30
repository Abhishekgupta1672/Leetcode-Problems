class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size() , prod = 1 , left = 0 , res = 0;
        for(int i=0;i<n;i++){
            prod*=nums[i];
            while(prod>=k && left<=i){
                prod/=nums[left];
                left+=1;
            }
            res += i-left+1;
        }
        return res;
    }
};