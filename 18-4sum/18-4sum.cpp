class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, long long target) {
        int n = nums.size();
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                long long newT = target-nums[i]-nums[j];
                int x = j+1 , y = n-1;
                while(x<y){
                    long long res = nums[x]+nums[y];
                    if(res < newT) x++;
                    else if(res>newT) y--;
                    else{
                        s.insert({nums[i],nums[j],nums[x],nums[y]});
                        x++;
                        y--;
                    }
                }
            }
        }
        for(auto x:s){
            v.push_back(x);
        }
        return v;
    }
};