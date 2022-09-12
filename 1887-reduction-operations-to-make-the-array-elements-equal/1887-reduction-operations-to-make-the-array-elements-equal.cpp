class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        vector<pair<int,int>>res;
        int sum = 0 , maxS = 0;
        for(auto x : mp) res.push_back({x.first,x.second});
        sort(res.begin(),res.end());
        for(int i=res.size()-1;i>=1;i--){
            sum+=res[i].second;
            maxS+=sum;
        }
        return maxS;
    }
};