class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v;
        sort(nums.begin() , nums.end());
        int n = nums.size();
        if(n<3) return v;
        if(nums[0]>0) return v;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0) break;
            if(i>0 && nums[i]==nums[i-1]) continue;
            int left = i+1 , right = n-1;
            while(left<right)
            {
                if(nums[i]+nums[left]+nums[right] > 0) right--;
                else if(nums[i]+nums[left]+nums[right] < 0) left++;
                else
                {
                    v.push_back({nums[i] , nums[left] , nums[right]});
                    int last_left = nums[left] , last_right = nums[right];
                    while(left<right && last_left==nums[left])
                        left++;
                    while(left<right && last_right==nums[right])
                        right--;
                }
            }
        }
        return v;
    }
};