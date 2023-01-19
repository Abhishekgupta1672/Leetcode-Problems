class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int pref = 0 , ans = 0;
        vector<int>res(k);
        res[pref]++;
        for(int i=0;i<nums.size();i++){
            pref = (pref+nums[i])%k;
            if(pref < 0) pref+=k;
            ans += res[pref];
            res[pref]++;
        }
        return ans;
    }
};