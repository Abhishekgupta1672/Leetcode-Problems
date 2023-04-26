class Solution {
public:
    int solve(int n){
        int sum = 0;
        while(n>0){
            sum += n%10;
            n/=10;
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int sum1 = accumulate(nums.begin(),nums.end(),0);
        int sum2 = 0;
        for(int i=0;i<nums.size();i++){
            int var = solve(nums[i]);
            sum2+=var;
        }
        return abs(sum1-sum2);
    }
};