class Solution {
public:
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        map<int,int>mp;
        vector<int>res;
        for(auto x:nums1) mp[x]++;
        for(int i=0;i<n;i++){
            auto ind = mp.upper_bound(nums2[i]);
            if(ind == mp.end()){
                int t=mp.begin()->first;
                res.push_back(t);
                mp[t]--;
                if(mp[t]==0)mp.erase(t);
            }
            else{
                int t=ind->first;
                res.push_back(t);
                mp[t]--;
                if(mp[t]==0)mp.erase(t);
            }
        }
        return res;
    }
};