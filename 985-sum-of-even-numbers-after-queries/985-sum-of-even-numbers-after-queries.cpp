class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int res = 0;
        for(auto x : nums){
            if(x%2==0) res+=x;
        }
        vector<int>ans(nums.size());
        for(int i=0;i<queries.size();i++){
            if(nums[queries[i][1]]%2==0) res-=nums[queries[i][1]];
            nums[queries[i][1]]+=queries[i][0];
            if(nums[queries[i][1]]%2==0) res += nums[queries[i][1]];
            ans[i] = res;
        }
        return ans;
    }
};