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
        int sz = 0;
        while(sz < n/2)
        {
            sz+=pq.top();
            pq.pop();
            cnt++;
        }
        return cnt;
    }
};