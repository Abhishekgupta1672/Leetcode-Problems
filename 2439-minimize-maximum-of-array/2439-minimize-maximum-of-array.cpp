class Solution {
public:
    int minimizeArrayValue(vector<int>&nums) {
        int n = nums.size();        
        vector<long long> pref(n, nums[0]);   
        int ans = nums[0];          
        for (int i = 1; i < n; i++) {       
            pref[i] = pref[i - 1] + nums[i];      
            int maxi = ceil(pref[i] / double(i + 1));    
            ans = max(ans, maxi);    
        }   
        return ans;       
    }
};