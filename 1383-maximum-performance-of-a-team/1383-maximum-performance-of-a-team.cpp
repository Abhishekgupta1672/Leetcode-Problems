class Solution {
public:
    typedef pair<int, int> pi;
    const int mod = 1e9+7;
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        vector<pi>res;
        for(int i=0;i<n;i++){
            res.push_back({efficiency[i],speed[i]});
        }
        sort(res.rbegin(),res.rend());
        priority_queue<pi,vector<pi>,greater<pi>>pq;
        long long maxS = 0 , maxi = 0;
        for(int i=0;i<n;i++){
            pq.push({res[i].second,res[i].first});
            maxS += res[i].second;
            if(pq.size()>k){
                maxS-=pq.top().first;
                pq.pop();
            }
            maxi= max(maxi,(maxS*res[i].first));
        }
        return maxi%mod;
    }
};