class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(auto x:arr){
            mp[x]++;
        }
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto x:mp){
            pq.push(x.second);
        }
        while(k>0){
            k-=pq.top();
            if(k>=0) pq.pop();
        }
        return pq.size();
    }
};