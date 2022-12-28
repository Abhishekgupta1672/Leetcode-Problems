class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        for(auto x : piles){
            pq.push(x);
        }
        int sum = accumulate(piles.begin(),piles.end(),0);
        while(k--){
            int tp = pq.top();
            pq.pop();
            int half = tp/2;
            sum-=half;
            pq.push(tp-half);
        }
        return sum;
    }
};