class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        for(int i=nums.size();i>1;i-=i/2){
            for(int j=0;j<i/2;j++){
                nums[j] = (j%2==1)? max(nums[2*j],nums[2*j+1]):min(nums[2*j],nums[2*j+1]); 
            }
        }
        return nums[0];
    }
};