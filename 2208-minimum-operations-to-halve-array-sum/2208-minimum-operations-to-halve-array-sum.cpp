class Solution {
public:
    int halveArray(vector<int>& nums) {
        priority_queue<double>pq(nums.begin(),nums.end());
        double totalSum = accumulate(nums.begin(),nums.end(),0.0);
        double half = totalSum/2;
        int cnt = 0;
        while(totalSum > half){
            double tp = pq.top();
            pq.pop();
            double ss = tp/2;
            totalSum-=ss;
            pq.push(ss);
            cnt++;
        }
        return cnt;
    }
};