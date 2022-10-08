class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        if(nums[0]>0 || n<3) return {};
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            if(nums[i]>0) break;
            int left = i+1 , right = n-1;
            while(left<right){
                if(nums[left]+nums[right]+nums[i] < 0) left++;
                else if(nums[left]+nums[right]+nums[i] > 0) right--;
                else{
                    v.push_back({nums[left],nums[right],nums[i]});
                    int last_left = nums[left] , last_right = nums[right];
                    while(left<right && nums[left]==last_left) left++;
                    while(left<right && nums[right]==last_right) right--;
                }
            }
        }
        return v;
    }
};