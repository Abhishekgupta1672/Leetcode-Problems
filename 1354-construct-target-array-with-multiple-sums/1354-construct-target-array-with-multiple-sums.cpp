class Solution {
public:
    bool isPossible(vector<int>& target) {
        priority_queue<long long> pq;
        if(target.size() == 1){
            return target.front() == 1;
        }
        long long fixed = 0;
        for(int& i : target){
            fixed += i;
            pq.push(i);
        }
        while(pq.top() > 1){
            long long tn = pq.top();
            fixed -= tn;
            fixed++;            
            pq.pop();
            if(tn < fixed) return false;
            int n = ceil(1.0*(tn-pq.top())/(fixed-1));
            tn -= n*(fixed-1);
            if(tn == 0)return false;
            fixed += (tn-1);
            pq.push(tn);
        }
        return true;
    }
};