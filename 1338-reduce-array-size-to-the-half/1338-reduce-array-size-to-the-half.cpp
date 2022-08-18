class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int>mp;
        for(auto x : arr)
            mp[x]++;
        priority_queue<int>pq;
        for(auto x : mp){
            pq.push(x.second);
        }
        int cnt = 0;
        int sz = n;
        while(!pq.empty())
        {
            int tp = pq.top();
            pq.pop();
            cnt++;
            if(sz-tp <= n/2) return cnt;
            sz-=tp;
        }
        return 0;
    }
};