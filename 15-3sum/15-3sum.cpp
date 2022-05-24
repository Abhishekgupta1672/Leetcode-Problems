class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;
        sort(nums.begin() , nums.end());
        int n = nums.size();
        int sum = 0;
        if(nums.size()==0)
            return {};
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
                break;
            else if(i>0 && nums[i]==nums[i-1])
                continue;
            int l = i+1 , r = n-1;
            while(l<r)
            {
                sum = nums[i]+nums[l]+nums[r];
                if(sum>0)
                    r--;
                else if(sum<0)
                    l++;
                else
                {
                    res.push_back({nums[i] , nums[l] , nums[r]});
                    while(l<r && nums[l]==nums[l+1])
                        l++;
                    while(r>l && nums[r]==nums[r-1])
                        r--;
                    l++;
                    r--;
                        
                }
            }
        }
        return res;
    }
};