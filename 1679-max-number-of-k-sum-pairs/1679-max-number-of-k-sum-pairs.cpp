class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        int cnt = 0;
        for(auto x:mp){
            int f = x.first;
            int s = x.second;
            if(k-f == f) cnt+=s/2;
            else if(mp.count(k-f)){
                int mini = min(s,mp[k-f]);
                cnt+=mini;
                mp[f]-=mini;
                mp[k-f]-=mini;
            }
        }
        return cnt;
    }
};