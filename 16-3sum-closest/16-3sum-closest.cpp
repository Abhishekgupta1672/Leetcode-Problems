class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int res = nums[0]+nums[1]+nums[2];
        sort(begin(nums),end(nums));
        for(int i=0;i<n;i++){
            int j = i+1 , k = n-1;
            while(j<k){
                int cur = nums[i]+nums[j]+nums[k];
                if(abs(cur-target) <= abs(res-target)) res = cur;
                if(cur < target) j++;
                else k--;
            }
        }
        return res;
    }
};