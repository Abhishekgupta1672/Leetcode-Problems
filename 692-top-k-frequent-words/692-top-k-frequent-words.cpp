// class cmp{
//     public:
//     bool operator()(pair<int,string> a, pair<int,string> b) const{
//         if(a.first < b.first) return true;
//         else if(a.first == b.first && a.second>b.second) return true;
//         return false;
//     }
// };

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> ump;
        for(auto &w : words) ump[w]++;
        priority_queue<pair<int,string>,vector<pair<int,string>>,MyComp> pq;
        for(auto &m : ump)
        {
            pq.push({m.second,m.first});
            if(pq.size()>k)
                pq.pop();
        }
        vector<string> res;
        while(!pq.empty()) {
            res.insert(res.begin(), pq.top().second);
            pq.pop();
        }
        return res;
    }
private:
    struct MyComp {
        bool operator() (const pair<int, string>& a, const pair<int, string>& b) {
            if(a.first != b.first) {
                return a.first > b.first;
            }
            else {
                return a.second < b.second;
            }
        }
    };
};