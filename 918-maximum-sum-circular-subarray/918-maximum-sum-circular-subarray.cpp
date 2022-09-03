class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int cur1 = 0,cur2 = 0;
        int minS = INT_MAX,maxS = INT_MIN;
        int sum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            cur1 = max(cur1+nums[i],nums[i]);
            cur2 = min(cur2+nums[i],nums[i]);
            maxS = max(maxS,cur1);
            minS = min(minS,cur2);
            sum += nums[i];
        }
        if(sum == minS) return maxS;
        return max(maxS,sum-minS);
    }
};