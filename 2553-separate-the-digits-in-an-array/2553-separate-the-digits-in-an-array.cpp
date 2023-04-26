class Solution {
public:
    vector<int>res;
    void solve(int n){
        while(n>0){
            res.push_back(n%10);
            n/=10;
        }
    }
    vector<int> separateDigits(vector<int>& nums) {
        for(int i=nums.size()-1;i>=0;i--){
            solve(nums[i]);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};