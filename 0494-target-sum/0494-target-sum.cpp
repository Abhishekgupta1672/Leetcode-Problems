class Solution {
public:
    int cnt = 0;
    void rec(vector<int>&nums, int idx, int sum, int target){
        if(idx==nums.size()){
            if(sum==target) cnt++;
        }
        else{
            rec(nums,idx+1,sum+nums[idx],target);
            rec(nums,idx+1,sum-nums[idx],target);
        }
    }
    
    int findTargetSumWays(vector<int>& nums, int target) {
        rec(nums,0,0,target);
        return cnt;
    }
};