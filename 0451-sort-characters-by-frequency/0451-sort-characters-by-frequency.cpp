class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(auto x:s){
            mp[x]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto x:mp){
            pq.push({x.second,x.first});
        }
        string str = "";
        while(!pq.empty()){
            int first = pq.top().first;
            char second = pq.top().second;
            pq.pop();
            while(first--){
                str+=second;
            }
        }
        return str;
    }
};