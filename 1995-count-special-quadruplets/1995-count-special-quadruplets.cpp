class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        unordered_map<int,int>mp;
        int cnt = 0;
        // for(auto x : nums) mp[x]++;
        int n = nums.size();
        for(int i=n-1;i>1;i--){
           for(int j=i-1;j>0;j--){
               for(int k=j-1;k>=0;k--){
                    if(mp.find(nums[i]+nums[j]+nums[k]) != mp.end()) cnt+=mp[nums[i]+nums[j]+nums[k]];
               }
           }
           mp[nums[i]]++;
        }
        return cnt;
    }
};