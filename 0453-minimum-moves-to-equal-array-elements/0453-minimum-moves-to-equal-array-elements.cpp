class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = *min_element(nums.begin(),nums.end());
        int ans = 0;
        for(auto x : nums){
            ans += (x-n);
        }
        return ans;
    }
};