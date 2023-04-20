class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            int cnt = 0 , sum = 0;
            for(int j=1;j<=sqrt(nums[i]);j++){
                if(nums[i]%j == 0){
                    if(nums[i]/j == j){
                        cnt+=1;
                        sum+=j;
                    }
                    else{
                        cnt+=2;
                        sum += j+nums[i]/j;
                    }
                }
            }
            if(cnt==4) ans+=sum;
        }
        return ans;
    }
};