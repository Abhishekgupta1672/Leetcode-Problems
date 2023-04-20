class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        unordered_map<int,int>mp;
        for(auto x: nums) mp[x]++;
        int maxi = -1;
        for(int i=0;i<nums.size()-1;i++){
            int cnt = 1;
            while(mp[sqrt(nums[i])] > 0){
                int p = sqrt(nums[i]);
                if(p*p == nums[i]) cnt++;
                else break;
                mp[sqrt(nums[i])]--;
                nums[i] = sqrt(nums[i]);
                maxi = max(cnt,maxi);
            }
        }
        return maxi;
    }
};